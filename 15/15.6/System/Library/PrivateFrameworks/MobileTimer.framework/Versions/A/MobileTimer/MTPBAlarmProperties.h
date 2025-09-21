@class NSString, MTPBSound;

@interface MTPBAlarmProperties : PBCodable <NSCopying> {
    struct { unsigned char bedtimeDismissedDate : 1; unsigned char bedtimeFiredDate : 1; unsigned char bedtimeSnoozeFireDate : 1; unsigned char dismissedDate : 1; unsigned char firedDate : 1; unsigned char keepOffUntilDate : 1; unsigned char lastModifiedDate : 1; unsigned char snoozeFireDate : 1; unsigned char bedtimeDismissedAction : 1; unsigned char bedtimeHour : 1; unsigned char bedtimeMinute : 1; unsigned char bedtimeReminderMinutes : 1; unsigned char daySetting : 1; unsigned char dismissedAction : 1; unsigned char hour : 1; unsigned char minute : 1; unsigned char onboardingVersion : 1; unsigned char revision : 1; unsigned char bedtimeDoNotDisturbOptions : 1; unsigned char allowsSnooze : 1; unsigned char isEnabled : 1; unsigned char isSleepAlarm : 1; unsigned char bedtimeDoNotDisturb : 1; unsigned char sleepSchedule : 1; unsigned char sleepTracking : 1; unsigned char timeInBedTracking : 1; } _has;
}

@property (readonly, nonatomic) char hasAlarmID;
@property (retain, nonatomic) NSString *alarmID;
@property (nonatomic) char hasHour;
@property (nonatomic) unsigned int hour;
@property (nonatomic) char hasMinute;
@property (nonatomic) unsigned int minute;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char hasAllowsSnooze;
@property (nonatomic) char allowsSnooze;
@property (nonatomic) char hasDaySetting;
@property (nonatomic) unsigned int daySetting;
@property (readonly, nonatomic) char hasSound;
@property (retain, nonatomic) MTPBSound *sound;
@property (nonatomic) char hasIsSleepAlarm;
@property (nonatomic) char isSleepAlarm;
@property (nonatomic) char hasBedtimeHour;
@property (nonatomic) unsigned int bedtimeHour;
@property (nonatomic) char hasBedtimeMinute;
@property (nonatomic) unsigned int bedtimeMinute;
@property (nonatomic) char hasBedtimeReminderMinutes;
@property (nonatomic) unsigned int bedtimeReminderMinutes;
@property (nonatomic) char hasRevision;
@property (nonatomic) unsigned int revision;
@property (nonatomic) char hasLastModifiedDate;
@property (nonatomic) double lastModifiedDate;
@property (nonatomic) char hasSnoozeFireDate;
@property (nonatomic) double snoozeFireDate;
@property (nonatomic) char hasBedtimeSnoozeFireDate;
@property (nonatomic) double bedtimeSnoozeFireDate;
@property (nonatomic) char hasIsEnabled;
@property (nonatomic) char isEnabled;
@property (nonatomic) char hasFiredDate;
@property (nonatomic) double firedDate;
@property (nonatomic) char hasDismissedDate;
@property (nonatomic) double dismissedDate;
@property (nonatomic) char hasSleepMode;
@property (nonatomic) char bedtimeDoNotDisturb;
@property (nonatomic) char hasSleepTracking;
@property (nonatomic) char sleepTracking;
@property (nonatomic) char hasSleepSchedule;
@property (nonatomic) char sleepSchedule;
@property (nonatomic) char hasOnboardingVersion;
@property (nonatomic) unsigned int onboardingVersion;
@property (nonatomic) char hasSleepModeOptions;
@property (nonatomic) unsigned int bedtimeDoNotDisturbOptions;
@property (nonatomic) char hasTimeInBedTracking;
@property (nonatomic) char timeInBedTracking;
@property (nonatomic) char hasDismissedAction;
@property (nonatomic) unsigned int dismissedAction;
@property (nonatomic) char hasBedtimeFiredDate;
@property (nonatomic) double bedtimeFiredDate;
@property (nonatomic) char hasBedtimeDismissedDate;
@property (nonatomic) double bedtimeDismissedDate;
@property (nonatomic) char hasBedtimeDismissedAction;
@property (nonatomic) unsigned int bedtimeDismissedAction;
@property (nonatomic) char hasKeepOffUntilDate;
@property (nonatomic) double keepOffUntilDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)setSleepMode:(char)a0;
- (void)setSleepModeOptions:(unsigned int)a0;

@end
