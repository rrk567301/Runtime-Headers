@class VSOptional, NSUUID, NSString, VSViewServiceHostViewController, VSViewServiceRequest;
@protocol VSViewServiceRequestOperationDelegate;

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate> {
    BOOL _isPresentingViewController;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController;
@property (copy, nonatomic) NSUUID *requestID;
@property (readonly, copy, nonatomic) VSViewServiceRequest *viewServiceRequest;
@property (weak, nonatomic) id<VSViewServiceRequestOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)_dismissViewControllerIfRequired;
- (void)_presentViewController;
- (void)dismissViewServiceHostViewController:(id)a0;
- (void)finishExecutionIfPossible;
- (id)initWithViewServiceRequest:(id)a0;
- (void)presentViewServiceHostViewController:(id)a0;
- (void)viewServiceHostViewController:(id)a0 didCancelRequest:(id)a1;
- (void)viewServiceHostViewController:(id)a0 didChooseAdditionalProvidersForRequest:(id)a1;
- (void)viewServiceHostViewController:(id)a0 request:(id)a1 didFailWithError:(id)a2;
- (void)viewServiceHostViewController:(id)a0 request:(id)a1 didFinishWithResponse:(id)a2;
- (BOOL)viewServiceHostViewController:(id)a0 shouldAuthenticateAccountProviderWithIdentifier:(id)a1;

@end
