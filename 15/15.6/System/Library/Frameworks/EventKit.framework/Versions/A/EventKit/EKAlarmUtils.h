@interface EKAlarmUtils : NSObject

+ (void)adjustRelativeAlarmsForEvent:(id)a0 whenConvertingToIsAllDay:(char)a1;
+ (id)adjustedRelativeAlarmOffset:(double)a0 isAllDay:(char)a1;
+ (id)adjustedRelativeAlarmOffsetFromAllDayToTimed:(double)a0;
+ (id)adjustedRelativeAlarmOffsetFromTimedToAllDay:(double)a0;

@end
