@class HKSPChangeSet, NSSet, NSString, NSDate, NSNumber;
@protocol HKSPObject;

@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) double snoozeDuration;
@property (nonatomic) unsigned long long breaksThroughSilentModeOptions;
@property (nonatomic) BOOL breaksThroughSilentMode;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initFromObject:(id)a0;
- (id)mutableCopy;
- (void)revert;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)freeze;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTemplateAlarmConfiguration:(id)a0;
- (void)setBreaksThroughSilentMode:(BOOL)a0;

@end
