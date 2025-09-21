@class NSDate, NSString, NSURL, NSArray, NSMutableDictionary, NSDictionary, NSNumber;
@protocol AlarmDelegate;

@interface Alarm : NSObject {
    char _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
}

@property (retain, nonatomic) NSString *alarmID;
@property (retain, nonatomic) NSURL *alarmIDURL;
@property (readonly, nonatomic) Alarm *editingProxy;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isSnoozed) char snoozed;
@property (nonatomic) char isSleepAlarm;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int hour;
@property (nonatomic) unsigned int minute;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (readonly, nonatomic) char repeats;
@property (readonly, nonatomic) NSArray *repeatDays;
@property (nonatomic) unsigned int daySetting;
@property (nonatomic) char allowsSnooze;
@property (readonly, nonatomic) long long soundType;
@property (readonly, nonatomic) NSString *sound;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (readonly, nonatomic) NSString *uiTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *vibrationID;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) unsigned int revision;
@property (weak, nonatomic) id<AlarmDelegate> delegate;
@property (nonatomic) char forceActiveForMigration;

+ (char)verifySettings:(id)a0;
+ (id /* block */)timeComparator;
+ (char)verifyDaySetting:(id)a0 withMessageList:(id)a1;
+ (char)verifyHourSetting:(id)a0 withMessageList:(id)a1;
+ (char)verifyIdSetting:(id)a0 withMessageList:(id)a1;
+ (char)verifyMinuteSetting:(id)a0 withMessageList:(id)a1;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applySettings:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)setAlarmSoundIdentifier:(id)a0 ofType:(long long)a1;
- (id)_newBaseDateComponentsForDay:(long long)a0;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (id)alarmSoundVolume;
- (void)applyChangesFromEditingProxy;
- (long long)compareTime:(id)a0;
- (void)dropEditingProxy;
- (void)markModified;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)refreshActiveState;
- (void)setAlarmSoundVolume:(id)a0;
- (void)setSound:(id)a0 ofType:(long long)a1;
- (id)timeZoneForOffsetCalculation;

@end
