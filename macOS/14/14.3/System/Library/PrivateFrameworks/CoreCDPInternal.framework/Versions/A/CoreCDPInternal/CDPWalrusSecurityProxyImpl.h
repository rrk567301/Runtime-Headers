@class NSString, CDPDSecureBackupController, CDPContext, OTClique;

@interface CDPWalrusSecurityProxyImpl : NSObject <CDPWalrusSecurityProxy> {
    CDPContext *_context;
    CDPDSecureBackupController *_backupController;
    OTClique *_clique;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountSettingsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)webAccessStatusWithCompletion:(id /* block */)a0;
- (void)setWebAccessStatusEnabled:(BOOL)a0 completion:(id /* block */)a1;

@end
