@interface CalendarStore : NSObject

+ (void)disableSuddenTermination;
+ (void)enableSuddenTermination;
+ (id)propertiesNotToBeLookedUpInParent;
+ (id)propertiesMandatingRSVP;
+ (id)propertiesIncrementingSequence;
+ (id)propertiesImpactingDetachedEvents;
+ (id)propertiesDesignatingSignificance;
+ (id)propertiesToAlwaysUpdateOnDetachedEvents;
+ (id)propertiesToIgnoreWhenUpdatingDetachedEvents;
+ (long long)prefFirstMinuteOfWorkHours;

@end
