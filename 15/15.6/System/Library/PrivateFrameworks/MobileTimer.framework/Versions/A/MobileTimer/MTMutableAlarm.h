@class NSString, NSDictionary, NSDate, NSNumber, MTSound;

@interface MTMutableAlarm : MTAlarm

@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDate *bypassReloadDate;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) char timeInBedTracking;
@property (nonatomic) char sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) unsigned long long silentModeOptions;
@property (nonatomic) char allowsSnooze;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyChangesFromChangeSet:(id)a0;

@end
