@class SCRElement, SCRApplication;

@interface SCRInputMethodManager : NSObject

@property (class, readonly) SCRInputMethodManager *shared;

@property (retain, nonatomic) SCRElement *_currentInputMethodWindow;
@property (retain, nonatomic) SCRApplication *currentApplication;

- (void).cxx_destruct;
- (BOOL)isShowingCandidateWindow;
- (void)_inputMethodSelectionChanged:(id)a0;
- (void)handleCandidateWindowShown:(id)a0 forApplication:(id)a1;
- (void)handleCandidateWindowHidden;
- (BOOL)canActAsObserverTarget;
- (void)_handleListSelectionChangeForUIElement:(id)a0;
- (void)_delayedSendingRequest:(id)a0;

@end
