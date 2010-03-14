
#ifndef n6510_h
#define n6510_h

#include "../ncommon.h"
#include "../../../service/gsmsms.h"

typedef enum {
	N6510_MODE_NORMAL = 0x01,
	N6510_MODE_TEST   = 0x04,	
	N6510_MODE_LOCAL  = 0x05
} N6510_PHONE_MODE;

typedef enum {
	N6510_LIGHT_DISPLAY = 0x01,
	N6510_LIGHT_KEYPAD  = 0x03,
	N6510_LIGHT_TORCH   = 0x10
} N6510_PHONE_LIGHTS;

typedef struct {
	int				LastCalendarYear;
	int				LastCalendarPos;
	GSM_NOKIACalToDoLocations	LastCalendar;
	int				FirstCalendarPos;
	unsigned char			CalendarIcons[10];
	GSM_CalendarNoteType		CalendarIconsTypes[10];
	int				CalendarIconsNum;

	GSM_NOKIASMSFolder		LastSMSFolder;
	GSM_SMSFolders			LastSMSFolders;

	GSM_NOKIACalToDoLocations	LastToDo;

	unsigned char			RingtoneID;	/* When set with preview */

	int				FilesLocations[500];
	int				FilesLevels[500];
	int				FilesLocationsUsed;
	int				FilesLocationsCurrent;
	int				FileToken;
	int				ParentID;

	unsigned char			FMStatus[4000];
	int				FMStatusLength;

	unsigned char			GPRSPoints[4000];
	int				GPRSPointsLength;	

	unsigned char			PhoneMode;
} GSM_Phone_N6510Data;

#ifndef GSM_USED_MBUS2
#  define GSM_USED_MBUS2
#endif
#ifndef GSM_USED_FBUS2
#  define GSM_USED_FBUS2
#endif
#ifndef GSM_USED_FBUS2DLR3
#  define GSM_USED_FBUS2DLR3
#endif
#ifndef GSM_USED_FBUS2DKU5
#  define GSM_USED_FBUS2DKU5
#endif
#ifndef GSM_USED_PHONETBLUE
#  define GSM_USED_PHONETBLUE
#endif
#ifndef GSM_USED_IRDAPHONET
#  define GSM_USED_IRDAPHONET
#endif
#ifndef GSM_USED_BLUEPHONET
#  define GSM_USED_BLUEPHONET
#endif

#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */
