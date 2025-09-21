@class NSXPCListener, NSString, NSXPCConnection, AdminAuthenticator, PPSpecifierViewController, NSObject;
@protocol OS_dispatch_queue;

@interface PPSpecifierExtensionManager : NSObject <NSXPCListenerDelegate, PPSpecifierExtensionNotifying> {
    BOOL _initiallyEditable;
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

- (void)updateView;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setPersonality:(id)a0;
- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (void)authorize:(id)a0;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;
- (void)deauthorize;
- (BOOL)isAutorized;
- (BOOL)performSystemAdministrationBlock:(id /* block */)a0;
- (void)resumeConnectionWithEndpoint:(id)a0;
- (void)serviceViewControllerDidAwake:(id)a0;

@end
