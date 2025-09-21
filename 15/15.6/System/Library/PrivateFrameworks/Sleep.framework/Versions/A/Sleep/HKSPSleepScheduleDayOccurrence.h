@class NSSet, NSString, HKSPAlarmConfiguration, NSDateComponents, NSDate;

@interface HKSPSleepScheduleDayOccurrence : NSObject <HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)innerClasses;

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
- (id)_decodeComponentsForPersistenceWithCoder:(id)a0 key:(id)a1;
- (void)_encodeComponentsForPersistence:(id)a0 coder:(id)a1 key:(id)a2;
- (id)changesFromOccurrence:(id)a0;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;
- (char)isAlarmEquivalentToOccurrenceIgnoringDates:(id)a0;
- (char)isEquivalentToOccurrenceIgnoringDates:(id)a0;

@end
