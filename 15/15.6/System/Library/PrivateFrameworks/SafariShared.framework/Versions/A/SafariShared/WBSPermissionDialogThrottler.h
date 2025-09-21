@class NSMutableArray;

@interface WBSPermissionDialogThrottler : NSObject {
    long long _denyCount;
    NSMutableArray *_requestedPresentations;
    char _isShowingDialog;
    char _invalidated;
    char _callingPresentationHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_callNextPresentationHandlerIfNeeded;
- (char)_canShowPermissionDialog;
- (void)didCompletePermissionDialog:(char)a0;
- (void)requestPermissionDialogPresentation:(id /* block */)a0;
- (void)willPerformUserInitiatedNavigation;

@end
