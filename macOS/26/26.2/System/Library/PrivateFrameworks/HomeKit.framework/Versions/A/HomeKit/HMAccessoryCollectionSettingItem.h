@class HMAccessoryCollectionSetting, NSData, NSUUID;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessoryCollectionSetting *setting;
@property (readonly) NSData *serializedValue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (BOOL)requiresCustomItemValueClassesToDecodeForKeyPath:(id)a0;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)initWithValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)init;
- (BOOL)shouldBlockValueDecode;

@end
