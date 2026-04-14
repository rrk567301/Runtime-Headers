@class NSString, NSMutableDictionary, LAContext, NSError, _WKWebAuthenticationPanel, NSObject;
@protocol ASPublicKeyCredentialManagerDelegate, OS_dispatch_queue;

@interface ASPublicKeyCredentialManager : NSObject <_WKWebAuthenticationPanelDelegate, ASPublicKeyCredentialManagerInterface> {
    _WKWebAuthenticationPanel *_panel;
    NSMutableDictionary *_userHandlesToAssertionResponses;
    id /* block */ _selectPlatformAssertionCallback;
    id /* block */ _selectSecurityKeyAssertionCallback;
    NSString *_currentRelyingPartyIdentifier;
    LAContext *_currentAuthenticatedContext;
    BOOL _hasRunningPublicKeyCredentialOperation;
    NSError *_pendingError;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, weak, nonatomic) id<ASPublicKeyCredentialManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasRunningPublicKeyCredentialOperation;

- (id)init;
- (void).cxx_destruct;
- (void)panel:(id)a0 updateWebAuthenticationPanel:(long long)a1;
- (void)panel:(id)a0 dismissWebAuthenticationPanelWithResult:(long long)a1;
- (void)panel:(id)a0 requestPINWithRemainingRetries:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)panel:(id)a0 selectAssertionResponse:(id)a1 source:(long long)a2 completionHandler:(id /* block */)a3;
- (void)panel:(id)a0 requestLAContextForUserVerificationWithCompletionHandler:(id /* block */)a1;
- (void)_tearDownOnMainQueue;
- (void)cancelCurrentOperationIfNecessaryWithOverrideError:(id)a0;
- (id)_asToWKCredentialAssertionOptions:(id)a0;
- (void)_createCredentialOfKind:(unsigned long long)a0 withOptions:(id)a1;
- (void)_cancelCurrentOperationSynchronouslyOnInternalQueueIfNecessary;
- (id)_asToWKCredentialCreationOptions:(id)a0 forCredentialKind:(unsigned long long)a1;
- (id)_allowedCredentialsForAssertionOptions:(id)a0;
- (void)beginAssertionsWithOptions:(id)a0;
- (void)createNewPlatformCredentialWithOptions:(id)a0 authenticatedContext:(id)a1;
- (void)assertUsingPlatformCredentialForLoginChoice:(id)a0 authenticatedContext:(id)a1;
- (void)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)a0;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(id)a0;
- (void)clearAllCredentials;
- (void)setDelegateCancellingCurrentOperation:(id)a0;
- (id)encodeMakeCredentialCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1;
- (id)encodeGetAssertionCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1;

@end
