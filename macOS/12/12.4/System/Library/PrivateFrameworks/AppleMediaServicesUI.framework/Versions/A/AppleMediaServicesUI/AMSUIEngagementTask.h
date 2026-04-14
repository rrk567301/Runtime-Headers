@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, AMSUIEngagementTaskViewController, NSViewController, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer> {
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
@property (retain) AMSUIEngagementTaskViewController *taskController;
@property (retain) NSViewController *presentingViewController;
@property BOOL allowMultiplePresentations;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (BOOL)_isMacAppStore;

- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isRunning;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)presentEngagement;
- (BOOL)_isWindowPresentation;
- (BOOL)_isRemotePresentationEnabled;
- (id)_presentEngagementRemotely;
- (id)_presentEngagementLocally;
- (id)_presentTaskController;
- (BOOL)_isRemoteViewService;
- (id)_presentViewController:(id)a0 dismissBlock:(id /* block */)a1;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;

@end
