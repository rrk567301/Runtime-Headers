@class NSString, SYDStoreID, NSDictionary;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SYDStoreID *storeID;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSDictionary *entitlementOverrides;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
