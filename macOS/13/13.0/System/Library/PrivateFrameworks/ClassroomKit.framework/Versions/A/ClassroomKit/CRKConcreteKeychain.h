@class NSDictionary, NSString;

@interface CRKConcreteKeychain : NSObject <CRKKeychain>

@property (class, readonly, nonatomic) CRKConcreteKeychain *defaultKeychain;

@property (readonly, copy, nonatomic) NSDictionary *baseQueryAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)certificateWithPersistentID:(id)a0;
- (id)identityWithPersistentID:(id)a0;
- (id)addCertificate:(id)a0 toAccessGroup:(id)a1;
- (id)addIdentity:(id)a0 toAccessGroup:(id)a1;
- (id)addPrivateKey:(id)a0 toAccessGroup:(id)a1;
- (void)setPassword:(id)a0 forService:(id)a1 accessGroup:(id)a2;
- (id)privateKeyWithPersistentID:(id)a0;
- (id)passwordForService:(id)a0;
- (id)makeIdentityWithConfiguration:(id)a0;
- (id)makeIdentityWithCertificate:(id)a0 privateKey:(id)a1;
- (id)makeCertificateWithData:(id)a0;
- (id)makePrivateKeyWithData:(id)a0;
- (void)removeItemWithPersistentID:(id)a0;
- (id)initWithBaseQueryAttributes:(id)a0;
- (id)makePasswordFacade;
- (const void *)copyItemWithPersistentID:(id)a0 itemClass:(id)a1;
- (id)makeItemWithPersistentID:(id)a0 itemClass:(id)a1 creationBlock:(id /* block */)a2;
- (id)addItem:(void *)a0 toAccessGroup:(id)a1;

@end
