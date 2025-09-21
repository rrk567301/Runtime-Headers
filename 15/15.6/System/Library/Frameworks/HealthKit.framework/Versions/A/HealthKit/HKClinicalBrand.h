@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, nonatomic, getter=isFakeBrandForTestAccounts) char fakeBrandForTestAccounts;

+ (id)createFakeBrandForTestAccounts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalID:(id)a0 batchID:(id)a1;

@end
