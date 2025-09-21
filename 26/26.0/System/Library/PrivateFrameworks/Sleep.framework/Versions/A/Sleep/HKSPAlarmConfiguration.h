@class NSSet, NSString, NSDate, NSNumber;

@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL allowsSnooze;
@property (readonly, nonatomic) double snoozeDuration;
@property (readonly, nonatomic) unsigned long long breaksThroughSilentModeOptions;
@property (readonly, nonatomic) BOOL breaksThroughSilentMode;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *soundVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

- (void)_migrateForCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initFromObject:(id)a0;
- (id)mutableCopy;
- (BOOL)isEquivalentTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
