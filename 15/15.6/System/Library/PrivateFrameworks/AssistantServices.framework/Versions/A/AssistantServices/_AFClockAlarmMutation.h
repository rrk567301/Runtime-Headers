@class NSString, NSUUID, NSURL, NSDate, AFClockAlarm;

@interface _AFClockAlarmMutation : NSObject <AFClockAlarmMutating> {
    AFClockAlarm *_base;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    char _isFiring;
    NSString *_title;
    unsigned long long _type;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatOptions;
    char _isEnabled;
    char _isSnoozed;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAlarmID : 1; unsigned char hasAlarmURL : 1; unsigned char hasIsFiring : 1; unsigned char hasTitle : 1; unsigned char hasType : 1; unsigned char hasHour : 1; unsigned char hasMinute : 1; unsigned char hasRepeatOptions : 1; unsigned char hasIsEnabled : 1; unsigned char hasIsSnoozed : 1; unsigned char hasFiredDate : 1; unsigned char hasDismissedDate : 1; unsigned char hasLastModifiedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHour:(unsigned long long)a0;
- (void)setMinute:(unsigned long long)a0;
- (void)setType:(unsigned long long)a0;
- (void)setTitle:(id)a0;
- (char)isDirty;
- (void)setIsEnabled:(char)a0;
- (unsigned long long)getType;
- (id)getTitle;
- (void)setLastModifiedDate:(id)a0;
- (void)setIsFiring:(char)a0;
- (void)setIsSnoozed:(char)a0;
- (unsigned long long)getHour;
- (id)getAlarmID;
- (id)getAlarmURL;
- (id)getDismissedDate;
- (id)getFiredDate;
- (char)getIsEnabled;
- (char)getIsFiring;
- (char)getIsSnoozed;
- (id)getLastModifiedDate;
- (unsigned long long)getMinute;
- (unsigned long long)getRepeatOptions;
- (id)initWithBase:(id)a0;
- (void)setAlarmID:(id)a0;
- (void)setAlarmURL:(id)a0;
- (void)setDismissedDate:(id)a0;
- (void)setFiredDate:(id)a0;
- (void)setRepeatOptions:(unsigned long long)a0;

@end
