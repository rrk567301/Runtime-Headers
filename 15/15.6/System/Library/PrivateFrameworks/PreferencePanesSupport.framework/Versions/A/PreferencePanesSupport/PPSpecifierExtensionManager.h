@class NSXPCListener, NSString, NSXPCConnection, AdminAuthenticator, PPSpecifierViewController, NSObject;
@protocol OS_dispatch_queue;

@interface PPSpecifierExtensionManager : NSObject <NSXPCListenerDelegate, PPSpecifierExtensionNotifying> {
    char _initiallyEditable;
    AdminAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_adminQueue;
}

@property (weak) PPSpecifierViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setEditable:(char)a0;
- (void)setPersonality:(id)a0;
- (void)authorize:(id)a0;
- (void)updateView;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;
- (void)deauthorize;
- (char)isAutorized;
- (char)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;

@end
