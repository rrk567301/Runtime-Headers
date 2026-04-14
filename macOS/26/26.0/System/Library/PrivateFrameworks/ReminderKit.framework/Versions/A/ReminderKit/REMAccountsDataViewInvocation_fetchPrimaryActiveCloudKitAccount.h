@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL fetchREMObjectIDOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFetchREMObjectIDOnly:(BOOL)a0;

@end
