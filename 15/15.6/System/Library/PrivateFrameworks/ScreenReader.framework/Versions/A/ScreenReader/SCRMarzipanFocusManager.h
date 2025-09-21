@class SCRCThread, SCRCTargetSelectorTimer, _SCRLayoutChangedNotificationInfo;

@interface SCRMarzipanFocusManager : NSObject

@property (retain, nonatomic) SCRCThread *_focusManagerThread;
@property (retain, nonatomic) SCRCTargetSelectorTimer *_focusChainValidationTimer;
@property (retain, nonatomic) _SCRLayoutChangedNotificationInfo *_aggregatedLayoutChangedNotificationInfo;

+ (id)_childOfElement:(id)a0 closestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rebuildChildren:(char)a2;
+ (id)_chopOffSelectionStateFromEquivalenceTag:(id)a0;
+ (id)_currentFocusChainDownFromElement:(id)a0;
+ (id)_deepestDescendantOfElement:(id)a0 closestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rebuildChildren:(char)a2;
+ (id)_deepestFocusedChildOfElement:(id)a0;
+ (id)_elementClosestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 amongElements:(id)a1;
+ (char)_hasValidFocusChain:(id)a0 toApplication:(id)a1;
+ (void)_highlightNewDeepestFocusedElement:(id)a0 playFeedback:(char)a1 playSound:(char)a2 request:(id)a3;
+ (char)_isElementValidForFocusChain:(id)a0;
+ (char)_isElementValidToJumpTo:(id)a0 inApplication:(id)a1;
+ (char)_isGroupElement:(id)a0;
+ (id)_parentChainFromElement:(id)a0 upToElement:(id)a1;
+ (id)_refreshFocusChainFromElement:(id)a0;
+ (id)_validAndVisibleFocusChainFromElement:(id)a0 updateChildrenAlongTheWay:(char)a1;
+ (id)_validElementToJumpToFromAXUIElement:(struct __AXUIElement { } *)a0 inApplication:(id)a1;
+ (char)jumpFocusToElement:(id)a0 inApplication:(id)a1 onPreviousScreen:(char)a2 request:(id)a3;
+ (char)jumpFocusToElement:(id)a0 inApplication:(id)a1 playSound:(char)a2 onPreviousScreen:(char)a3 request:(id)a4;
+ (char)jumpFocusToElement:(id)a0 inApplication:(id)a1 request:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_aggregateLayoutChangedNotificationInfo:(id)a0;
- (void)_app_validateFocusChainInApplicationWithNotificationInfo:(id)a0;
- (void)_cancelPendingSelectorsOnFocusManagerThread;
- (void)_exitFocusManagerThread:(id)a0;
- (id)_findNewDeepestFocusedElementFromNotificationInfo:(id)a0 focusDidMove:(char *)a1 foundPreviousScreen:(char *)a2;
- (id)_findNewDeepestFocusedElementFromScreenChangedNotificationInfo:(id)a0 foundPreviousScreen:(char *)a1;
- (id)_findScreenChangedCachedElementFromNotificationInfo:(id)a0 foundPreviousScreen:(char *)a1 includeRemoteElements:(char)a2;
- (id)_forceRefreshBelowDeepestFocusedElement:(id)a0 inFocusChain:(id)a1 focusDidMove:(char *)a2;
- (id)_forceRefreshFocusBelowParentOfDeepestFocusedElement:(id)a0 inFocusChain:(id)a1 focusDidMove:(char *)a2;
- (void)_handleFocusChainValidationTimerFired;
- (void)_handleLayoutChangedForApplication:(id)a0 userInfo:(id)a1;
- (id)_hitElementEqualToArchive:(id)a0 application:(id)a1 includeRemoteElements:(char)a2;
- (id)_hitElementWithElementArchive:(id)a0 application:(id)a1 includeRemoteElements:(char)a2;
- (void)_initializeFocusManagerThread;
- (void)_outputFocusChangeInApplication:(id)a0 withNewDeepFocusedElement:(id)a1 focusDidMove:(char)a2 onPreviousScreen:(char)a3;
- (void)_scheduleFocusValidationTimer:(id)a0;

@end
