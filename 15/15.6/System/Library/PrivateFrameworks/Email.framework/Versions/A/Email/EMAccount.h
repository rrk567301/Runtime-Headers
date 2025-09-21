@class NSString;

@interface EMAccount : EMObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *hostname;
@property (readonly, getter=isPrimaryiCloudAccount) char primaryiCloudAccount;

+ (char)supportsSecureCoding;
+ (id)sortDescriptorForNameAscending:(char)a0;
+ (id)predicateForDeliveryAccounts;
+ (id)predicateForReceivingAccounts;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)ef_publicDescription;

@end
