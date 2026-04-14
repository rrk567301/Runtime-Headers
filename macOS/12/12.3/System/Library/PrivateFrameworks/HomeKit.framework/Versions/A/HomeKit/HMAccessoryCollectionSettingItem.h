@class NSUUID, HMAccessoryCollectionSetting, NSData, HMFUnfairLock;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessoryCollectionSetting *setting;
@property (readonly) NSData *serializedValue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (BOOL)requiresCustomItemValueClassesToDecodeForKeyPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)shortDescription;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (BOOL)shouldBlockValueDecode;

@end
