@class NSString, VSPrivacyVoucherLockbox, NSOperationQueue, NSArray;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol>

@property (retain, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly, copy, nonatomic) NSArray *knownAppBundles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)reset;
- (id)initWithService:(id)a0 voucherLockbox:(id)a1;
- (char)setAccessGranted:(char)a0 forAuditToken:(struct { unsigned int x0[8]; })a1;
- (void)_promptForAccessUsingAuditToken:(struct { unsigned int x0[8]; })a0 processIdentifier:(int)a1 identityProviderDisplayName:(id)a2 providerIsSupported:(char)a3 completionHandler:(id /* block */)a4;
- (id)_voucherForProcess:(int)a0 providerID:(id)a1;
- (id)initWithVoucherLockbox:(id)a0;
- (char)isAccessGrantedForAuditToken:(struct { unsigned int x0[8]; })a0;
- (char)isAccessGrantedForBundle:(struct __CFBundle { } *)a0;
- (char)isAccessGrantedForBundleID:(id)a0;
- (void)preflightCheckForProcessIdentifier:(int)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestAccessForAuditToken:(struct { unsigned int x0[8]; })a0 processIdentifier:(int)a1 identityProviderDisplayName:(id)a2 providerIsSupported:(char)a3 identityProviderID:(id)a4 allowUI:(char)a5 completionHandler:(id /* block */)a6;
- (char)setAccessGranted:(char)a0 forBundle:(struct __CFBundle { } *)a1;
- (char)setAccessGranted:(char)a0 forBundleID:(id)a1;

@end
