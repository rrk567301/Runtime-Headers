@class NSString, AMSPromiseSerialQueue;

@interface AMSAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) AMSPromiseSerialQueue *authenticationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_updateAccount:(id)a0 withLegacyOptions:(id)a1;

@end
