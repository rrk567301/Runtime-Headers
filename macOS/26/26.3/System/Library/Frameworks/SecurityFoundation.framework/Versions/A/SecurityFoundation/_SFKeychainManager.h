@class NSObject;
@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;

+ (id)defaultOverCommitManager;
+ (id)defaultManager;

- (void)setKey:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (struct __CFDictionary { } *)_privateKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (void)identityForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (id)publicKeyLookupWithIdentifier:(id)a0 certificate:(id)a1 result:(int)a2;
- (void)identitiesFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 error:(id *)a3;
- (id)identityForIdentifier:(id)a0;
- (id)initOverCommitManager;
- (id)initManager;
- (int)generateAttributesForIdentityAndAddToKeychain:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2;
- (struct __CFDictionary { } *)_certificateAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1;
- (void)keysFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (struct __CFDictionary { } *)_commonKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (struct __SecKey { } *)findPrivateKeyWithIdentifier:(id)a0 certificate:(id *)a1 result:(int *)a2;
- (void).cxx_destruct;
- (void)removeItemWithIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (id)_symmetricKeyAttributesForIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)keyForIdentifier:(id)a0 specifier:(id)a1 resultHandler:(id /* block */)a2;
- (struct __CFDictionary { } *)_publicKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (id)foundPrivateKey:(struct __SecKey { } *)a0 certificate:(id)a1;

@end
