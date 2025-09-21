@class NSString, NSXPCConnection, AdminAuthenticator, PPSecPrivacyViewController, NSObject;
@protocol OS_dispatch_queue;

@interface PPSecPrivacyExtensionManager : NSObject {
    char _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
}

@property (weak) PPSecPrivacyViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)setEditable:(char)a0;
- (void)authorize:(id)a0;
- (void)deauthorize;
- (char)isAutorized;
- (char)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;

@end
