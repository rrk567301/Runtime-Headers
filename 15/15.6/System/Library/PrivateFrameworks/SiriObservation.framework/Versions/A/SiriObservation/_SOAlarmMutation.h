@class NSString, NSUUID, NSURL, SOAlarm;

@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {
    SOAlarm *_base;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatSchedule;
    char _isEnabled;
    char _isFiring;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAlarmID : 1; unsigned char hasAlarmURL : 1; unsigned char hasTitle : 1; unsigned char hasHour : 1; unsigned char hasMinute : 1; unsigned char hasRepeatSchedule : 1; unsigned char hasIsEnabled : 1; unsigned char hasIsFiring : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHour:(unsigned long long)a0;
- (void)setMinute:(unsigned long long)a0;
- (void)setTitle:(id)a0;
- (char)isDirty;
- (void)setIsEnabled:(char)a0;
- (id)getTitle;
- (void)setIsFiring:(char)a0;
- (unsigned long long)getHour;
- (id)getAlarmID;
- (id)getAlarmURL;
- (char)getIsEnabled;
- (char)getIsFiring;
- (unsigned long long)getMinute;
- (id)initWithBase:(id)a0;
- (void)setAlarmID:(id)a0;
- (void)setAlarmURL:(id)a0;
- (unsigned long long)getRepeatSchedule;
- (void)setRepeatSchedule:(unsigned long long)a0;

@end
