@class NSError, NSString, AMSEngagementRequest, AMSUIEngagementViewController, AMSBagKeySet, NSViewController, AMSEngagementResult, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, AMSBagConsumer> {
    BOOL _finished;
    BOOL _running;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSViewController *cachedNavigationController;
@property (retain) NSError *error;
@property BOOL presented;
@property (retain) AMSEngagementRequest *request;
@property (retain) AMSEngagementResult *result;
@property (readonly) AMSUIEngagementViewController *taskController;
@property (retain) NSViewController *presentingViewController;
@property BOOL allowMultiplePresentations;
@property (retain) AMSProcessInfo *clientInfo;
@property struct CGSize { double width; double height; } preferredContentSize;
@property BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isRunning;
- (double)_preferredWidth;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)presentEngagement;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;
- (BOOL)_isInitialEngagementViewController;
- (BOOL)_isRemotePresentationEnabled;
- (BOOL)_isRemoteViewService;
- (BOOL)_isWindowPresentation;
- (double)_preferredHeight;
- (id)_presentEngagementLocally;
- (id)_presentEngagementRemotely;
- (id)_presentTaskController;
- (id)_presentViewController:(id)a0 dismissBlock:(id /* block */)a1;
- (void)engagementViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (void)engagementViewControllerShouldDismiss:(id)a0;

@end
