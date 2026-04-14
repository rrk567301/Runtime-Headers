@class SCRCThread, SCRCTargetSelectorTimer, _SCRLayoutChangedNotificationInfo;

@interface SCRFocusManager : NSObject

@property (retain, nonatomic) SCRCThread *_focusManagerThread;
@property (retain, nonatomic) SCRCTargetSelectorTimer *_focusChainValidationTimer;
@property (retain, nonatomic) _SCRLayoutChangedNotificationInfo *_aggregatedLayoutChangedNotificationInfo;

+ (id)_childOfElement:(id)a0 closestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rebuildChildren:(BOOL)a2;
+ (BOOL)jumpFocusToElement:(id)a0 inApplication:(id)a1 request:(id)a2;
+ (BOOL)jumpFocusToElement:(id)a0 inApplication:(id)a1 playSound:(BOOL)a2 request:(id)a3;
+ (id)_deepestFocusedChildOfElement:(id)a0;
+ (id)_validAndVisibleFocusChainFromElement:(id)a0 updateChildrenAlongTheWay:(BOOL)a1;
+ (BOOL)_isGroupElement:(id)a0;
+ (id)_validElementToJumpToFromAXUIElement:(struct __AXUIElement { } *)a0 inApplication:(id)a1;
+ (BOOL)_isElementValidToJumpTo:(id)a0 inApplication:(id)a1;
+ (id)_refreshFocusChainFromElement:(id)a0;
+ (void)_highlightNewDeepestFocusedElement:(id)a0 playFeedback:(BOOL)a1 playSound:(BOOL)a2 request:(id)a3;
+ (BOOL)_isElementValidForFocusChain:(id)a0;
+ (BOOL)_hasValidFocusChain:(id)a0 toApplication:(id)a1;
+ (id)_parentChainFromElement:(id)a0 upToElement:(id)a1;
+ (id)_elementClosestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 amongElements:(id)a1;
+ (id)_chopOffSelectionStateFromEquivalenceTag:(id)a0;
+ (id)_currentFocusChainDownFromElement:(id)a0;
+ (id)_deepestDescendantOfElement:(id)a0 closestToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rebuildChildren:(BOOL)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleLayoutChangedForApplication:(id)a0 userInfo:(id)a1;
- (void)_initializeFocusManagerThread;
- (void)_handleFocusChainValidationTimerFired;
- (void)_exitFocusManagerThread:(id)a0;
- (void)_aggregateLayoutChangedNotificationInfo:(id)a0;
- (void)_cancelPendingSelectorsOnFocusManagerThread;
- (void)_scheduleFocusValidationTimer:(id)a0;
- (void)_app_validateFocusChainInApplicationWithNotificationInfo:(id)a0;

@end
