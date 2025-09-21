@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char fetchREMObjectIDOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFetchREMObjectIDOnly:(char)a0;

@end
