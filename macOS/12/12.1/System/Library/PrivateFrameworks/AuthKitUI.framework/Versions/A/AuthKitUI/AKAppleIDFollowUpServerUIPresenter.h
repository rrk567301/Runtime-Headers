@class FLFollowUpItem, NSString, AKAppleIDAuthenticationMacOSExtenstionContext, AKAppleIDServerUIContextController, NSURL, AKExtensionlessFollowUpHelperContext, AKAppleIDAuthenticationController;

@interface AKAppleIDFollowUpServerUIPresenter : NSObject <AKExtensionlessFollowUpServiceProvider, AKAppleIDAuthenticationMacOSExtenstionContextDelegate, AKFollowupExtensionlessServerUIProvider> {
    AKAppleIDServerUIContextController *_serverUIContextController;
    AKAppleIDAuthenticationController *_authController;
    id /* block */ _presentingClientCompletion;
    id /* block */ _serverUICompletion;
    NSURL *_initialURL;
    FLFollowUpItem *_item;
}

@property (copy, nonatomic) AKExtensionlessFollowUpHelperContext *followupHelperContext;
@property (copy, nonatomic) AKAppleIDAuthenticationMacOSExtenstionContext *authContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)signAdditionalHeadersWithRequest:(id)a0;
- (id)_fetchCurrentFollowUpItem;
- (void)_prepareServerUIContext;
- (void)_signRequestAndPrepareServerConfig:(id)a0;
- (void)_performClientCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_shouldSignWithIDMSAppleIDHeader;
- (void)_presentServerUIWithConfiguration:(id)a0;
- (void)_performAuthKitActionWithResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (BOOL)shouldAcknowledgeUserAction;
- (void)acknowledgeActionTakenOnFollowUpWithIdentifier:(id)a0 withAdditionalData:(id)a1 completion:(id /* block */)a2;
- (void)handleFinalResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (void)presentServerUIWithContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)_signWithIDMSAppleIDHeaderForRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
