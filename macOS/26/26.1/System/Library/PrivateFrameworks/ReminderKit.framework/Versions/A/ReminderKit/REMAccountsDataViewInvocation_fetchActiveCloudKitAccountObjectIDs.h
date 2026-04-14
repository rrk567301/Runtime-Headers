@interface REMAccountsDataViewInvocation_fetchActiveCloudKitAccountObjectIDs : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long fetchOption;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFetchOption:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
