@interface ASAuthorizationRemoteViewController : NSRemoteViewController <AuthenticationServicesHelperProtocol> {
    id /* block */ _viewServiceTerminationHandler;
}

@property (copy, nonatomic) id /* block */ versionCallbackHandler;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)beginAuthorizationOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)beginExportFlowOnEndpoint:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)cancelExportFlow;
- (void)continueExportWithNegotiatedFormatVersion:(id)a0;
- (void)presentSheetForNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
