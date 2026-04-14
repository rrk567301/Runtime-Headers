@class NSString, NSDictionary, NSNumber, MTSound;

@interface MTMutableAlarm : MTAlarm

@property (copy, nonatomic) NSDictionary *siriContext;
@property (nonatomic) BOOL bypassReload;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) BOOL bedtimeDoNotDisturb;
@property (nonatomic) unsigned long long bedtimeDoNotDisturbOptions;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) unsigned long long playOptions;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyChangesFromChangeSet:(id)a0;

@end
