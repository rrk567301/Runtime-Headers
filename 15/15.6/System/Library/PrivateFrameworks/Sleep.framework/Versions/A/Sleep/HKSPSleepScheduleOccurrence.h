@class NSSet, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSString, NSDate;

@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (readonly, nonatomic) char usesDefaultBedtimeAndWakeUpComponents;
@property (readonly, nonatomic) char isInitialized;
@property (readonly, nonatomic) char isRepeating;
@property (readonly, nonatomic) char isSingleDayOverride;
@property (readonly, nonatomic) char crossesDayBoundary;
@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) unsigned long long weekdays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (double)actualSleepInterval;
- (id)bedtimeDateForWakeUpDate:(id)a0 gregorianCalendar:(id)a1;
- (id)changesFromOccurrence:(id)a0;
- (id)convertToScheduledOccurrenceOnSameDaysAsOccurrence:(id)a0;
- (double)generalSleepInterval;
- (char)isAlarmEquivalentToOverrideOccurrence:(id)a0;
- (char)isEquivalentToOverrideOccurrence:(id)a0;
- (char)isValidOccurrence;
- (id)nextDateIntervalWithWakeUpAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (char)overrideAppliesToOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (long long)overrideDayInCalendar:(id)a0;
- (id)overrideOccurrenceTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)overrideOccurrenceWithWakeUpComponents:(id)a0 bedtimeComponents:(id)a1;
- (char)overridesWakeUpForOccurrenceOnDate:(id)a0 gregorianCalendar:(id)a1;
- (id)wakeUpDateForDate:(id)a0 day:(long long)a1 searchBackwards:(char)a2 gregorianCalendar:(id)a3;
- (id)wakeUpDateForDate:(id)a0 searchBackwards:(char)a1 gregorianCalendar:(id)a2;

@end
