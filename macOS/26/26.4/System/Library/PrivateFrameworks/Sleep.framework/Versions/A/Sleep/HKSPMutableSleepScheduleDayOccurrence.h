@class HKSPChangeSet, NSSet, NSDictionary, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSString;
@protocol HKSPObject;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDictionary *unknownProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)mutableCopy;
- (void)revert;
- (void)freeze;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasChangeAffectingScheduling;
- (id)initWithCoder:(id)a0;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;

@end
