@class NSString, NSDictionary, NSDate;

@interface UAFAssetSetSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *assetSets;
@property (readonly, copy) NSDictionary *usageAliases;
@property (readonly, copy) NSDate *expiration;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)propertiesAsDictionary;
- (BOOL)isValid:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 assetSets:(id)a1 usageAliases:(id)a2;
- (id)initWithName:(id)a0 assetSets:(id)a1 usageAliases:(id)a2 expires:(id)a3;
- (id)expirationAsString;
- (id)init:(id)a0 assetSets:(id)a1 usageAliases:(id)a2;
- (id)init:(id)a0 assetSets:(id)a1 usageAliases:(id)a2 expires:(id)a3;
- (BOOL)isEqualWithoutExpiration:(id)a0;

@end
