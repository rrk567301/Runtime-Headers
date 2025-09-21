@class NSString, HMHomeWalletKey, NSArray;

@interface HMHomeWalletKeyDeviceState : NSObject <HMFObject, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) HMHomeWalletKey *walletKey;
@property (copy) NSString *expressEnablementConflictingPassDescription;
@property char canAddWalletKey;
@property long long canAddWalletKeyErrorCode;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
