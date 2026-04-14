@class NSArray;

@interface REMAccountsDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *externalIdentifiers;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExternalIdentifiers:(id)a0;

@end
