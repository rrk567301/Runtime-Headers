@class NSXPCConnection;
@protocol WBSAuthenticationServicesAgentDelegate;

@interface WBSAuthenticationServicesAgentProxy : NSObject <WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface> {
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) id<WBSAuthenticationServicesAgentDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)_setUpConnection:(id)a0;

@end
