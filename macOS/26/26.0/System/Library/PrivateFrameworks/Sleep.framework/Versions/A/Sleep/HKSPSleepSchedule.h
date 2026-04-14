@class NSSet, HKSPSleepScheduleDayOccurrence, NSArray, HKSPSleepScheduleOccurrence, NSString, NSDate;
@protocol HKSPSyncAnchor;

@interface HKSPSleepSchedule : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, HKSPXPCObject, NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (readonly, nonatomic) unsigned long long windDownMinutes;
@property (readonly, nonatomic) double sleepDurationGoal;
@property (readonly, nonatomic) BOOL isDefaultSchedule;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *overrideOccurrence;
@property (readonly, nonatomic) unsigned long long weekdaysWithOccurrences;
@property (readonly, nonatomic) unsigned long long weekdaysWithoutOccurrences;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) double windDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;

+ (id)innerClasses;
+ (id)emptyScheduleWithSyncAnchor:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initFromObject:(id)a0;
- (BOOL)hasOccurrences;
- (id)_unsortedOccurrences;
- (id)mutableCopy;
- (id)_wakeUpComponentsByAddingSleepDurationGoalToBedtimeComponents:(id)a0;
- (id)emptyCopy;
- (id)occurrenceOnDay:(long long)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)objectWithSyncAnchor:(id)a0;
- (double)maximumAllowableWindDown;
- (id)overridenOccurrenceForOverrideOccurrence:(id)a0;
- (id)mutableOccurrenceTemplate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)occurrencesAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)isEmptySleepSchedule;
- (BOOL)meetsDefaultSleepGoal;
- (BOOL)isEnabledAndHasOccurrences;
- (void)_enumerateDayOccurrencesWithBlock:(id /* block */)a0;
- (id)occurrencesOnDays:(unsigned long long)a0;
- (id)allowableRangeForWeekdays:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allowableRangeForModifiedOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
