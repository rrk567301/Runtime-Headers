@class NSString, NSXPCConnection, AdminAuthenticator, NSObject, PPSharingServiceViewController;
@protocol OS_dispatch_queue;

@interface PPSharingServiceExtensionManager : NSObject {
    char _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
}

@property (weak) PPSharingServiceViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)setEditable:(char)a0;
- (void)authorize:(id)a0;
- (void)setServiceState:(long long)a0;
- (void)switchToPanel:(id)a0;
- (void)deauthorize;
- (char)isAutorized;
- (char)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;
- (void)setServiceAvailable:(char)a0;
- (void)setServiceHidden:(char)a0;

@end
