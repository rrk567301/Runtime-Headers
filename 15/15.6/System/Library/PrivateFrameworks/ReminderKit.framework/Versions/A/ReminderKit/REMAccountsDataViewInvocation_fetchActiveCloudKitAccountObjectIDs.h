@interface REMAccountsDataViewInvocation_fetchActiveCloudKitAccountObjectIDs : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long fetchOption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFetchOption:(long long)a0;

@end
