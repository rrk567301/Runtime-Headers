@class AMSProcessInfo, NSString, AMSEngagementResult, AMSBagKeySet, NSError, NSViewController, AMSEngagementRequest;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSError *error;
@property BOOL presented;
@property (retain) AMSEngagementRequest *request;
@property (retain) AMSEngagementResult *result;
@property (retain) NSViewController *viewController;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)_presentViewController:(id)a0;
- (id)presentEngagement;
- (BOOL)_isRemotePresentationEnabled;
- (id)_presentEngagementRemotely;
- (id)_presentEngagementLocally;
- (id)_viewControllerForType:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_finishWithResultInfo:(id)a0 error:(id)a1;
- (BOOL)_isRemoteViewService;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;

@end
