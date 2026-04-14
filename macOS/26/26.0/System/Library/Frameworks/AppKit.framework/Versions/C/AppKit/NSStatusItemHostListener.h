@class NSString, FBSceneWorkspace;
@protocol NSStatusItemHostListenerDelegate;

@interface NSStatusItemHostListener : NSObject <FBSceneWorkspaceDelegate> {
    FBSceneWorkspace *_service;
    NSString *_serviceIdentifier;
    id<NSStatusItemHostListenerDelegate> _delegate;
}

@property (readonly) NSString *localServiceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)init;
- (void)workspace:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (void)workspace:(id)a0 didReceiveScene:(id)a1 withContext:(id)a2 fromProcess:(id)a3;
- (void).cxx_destruct;
- (id)initWithLocalServiceIdentifier:(id)a0;
- (BOOL)_acceptScene:(id)a0 workspace:(id)a1 client:(id)a2;
- (id)_hostWithIdentifier:(id)a0;
- (void)activateWithDelegate:(id)a0;

@end
