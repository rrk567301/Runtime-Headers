@class NSString, SYDStoreID, NSDictionary;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SYDStoreID *storeID;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSDictionary *entitlementOverrides;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreID:(id)a0;

@end
