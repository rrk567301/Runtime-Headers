@class NSSet, NSString, NSDate, NSNumber;

@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *allProperties;
@property (class, readonly, nonatomic) NSSet *propertiesForEquivalence;
@property (class, readonly, nonatomic) NSSet *significantProperties;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char allowsSnooze;
@property (readonly, nonatomic) unsigned long long breaksThroughSilentModeOptions;
@property (readonly, nonatomic) char breaksThroughSilentMode;
@property (readonly, nonatomic) unsigned long long playOptions;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *soundVolume;
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
- (void)_migrateForCoder:(id)a0;
- (char)_needsMigrationForCoder:(id)a0;

@end
