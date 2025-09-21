@class ICUserIdentity, ICUserIdentityStore, ICStoreDialogResponseHandler;

@interface ICStoreRequestContext : ICRequestContext <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) ICUserIdentity *identity;
@property (readonly, copy, nonatomic) ICUserIdentity *delegatedIdentity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, copy, nonatomic) ICStoreDialogResponseHandler *storeDialogResponseHandler;
@property (readonly, nonatomic) char allowsExpiredBags;
@property (readonly, nonatomic) long long personalizationStyle;

+ (id)activeStoreAccountRequestContext;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithIdentity:(id)a0;
- (void)setIdentity:(id)a0;
- (id)userAgent;
- (id)copyWithBlock:(id /* block */)a0;
- (void)setAllowsExpiredBags:(char)a0;
- (void)setDelegatedIdentity:(id)a0;
- (void)setIdentityStore:(id)a0;
- (void)setPersonalizationStyle:(long long)a0;
- (id)initWithIdentity:(id)a0 clientInfo:(id)a1;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1 clientInfo:(id)a2;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1 clientInfo:(id)a2 authenticationProvider:(id)a3;
- (void)setStoreDialogResponseHandler:(id)a0;

@end
