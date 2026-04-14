@class NSObject;
@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)getCredentialIdentityStoreWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_credentialIdentityStoreWithIdentifier:(id)a0;
- (void)removeCredentialIdentityStoreWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
