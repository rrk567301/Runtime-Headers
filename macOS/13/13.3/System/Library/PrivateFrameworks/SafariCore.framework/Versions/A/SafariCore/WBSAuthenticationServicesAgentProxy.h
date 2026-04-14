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
- (void)_setUpConnection:(id)a0;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)test_createPasskeyWithUserName:(id)a0 displayName:(id)a1 relyingPartyIdentifier:(id)a2 userHandle:(id)a3 completionHandler:(id /* block */)a4;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 completionHandler:(id /* block */)a2;

@end
