@class NSMutableArray;

@interface WBSPermissionDialogThrottler : NSObject {
    long long _denyCount;
    NSMutableArray *_requestedPresentations;
    BOOL _isShowingDialog;
    BOOL _invalidated;
    BOOL _callingPresentationHandler;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_callNextPresentationHandlerIfNeeded;
- (BOOL)_canShowPermissionDialog;
- (void)didCompletePermissionDialog:(BOOL)a0;
- (void)requestPermissionDialogPresentation:(id /* block */)a0;
- (void)willPerformUserInitiatedNavigation;

@end
