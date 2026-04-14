@class NSString, NSArray, GKUIActivityIndicatorView, GKLoadableContentStateMachine;

@interface GKLoadingViewController : UXViewController <_GKStateMachineDelegate>

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) GKUIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)showLoadingIndicator;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterLoadedState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)didExitLoadedState;
- (void)setViewsToHideHidden:(BOOL)a0;

@end
