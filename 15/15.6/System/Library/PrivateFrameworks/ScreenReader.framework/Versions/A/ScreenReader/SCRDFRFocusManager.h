@class NSString, NSArray, SCRElement, NSObservation, NSDate, SCRApplicationManager, NSObject;
@protocol OS_dispatch_queue, AXETimer, NSObserver, NSObject, NSObservable;

@interface SCRDFRFocusManager : NSObject <SCRObserverTarget>

@property (retain, nonatomic) SCRElement *focusedElement;
@property (retain, nonatomic) NSArray *orderedNavigableElements;
@property (retain, nonatomic) NSDate *lastFocusTimestamp;
@property (readonly, nonatomic) SCRApplicationManager *_applicationManager;
@property (retain, nonatomic) NSArray *_functionRows;
@property (nonatomic) char _needToRefreshFunctionRows;
@property (retain, nonatomic) SCRElement *_functionRowInFocusChain;
@property (retain, nonatomic) id<AXETimer> _focusValidationTimer;
@property (retain, nonatomic) NSObservation<NSObservable, NSObserver> *_focusedApplicationObservation;
@property (retain, nonatomic) id<NSObject> _remoteUIElementsChangedObservation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_dfrFocusManagerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_applicationFunctionRowElementFromRemoteUIElement:(id)a0;
+ (char)_isAllowedToDrillIntoElement:(id)a0;
+ (char)_isAllowedToFocusOntoElement:(id)a0;
+ (char)_isValidDFRElementToFocusOnto:(id)a0;
+ (id)validatedChildrenToFocusIntoForElement:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearFocus;
- (void)_handleValueChanged:(id)a0;
- (id)_adjacentElementInElements:(id)a0 relativeToIndex:(unsigned long long)a1 searchingForward:(char)a2;
- (id)_appThread_adjacentLeafElementTo:(id)a0 movingForward:(char)a1;
- (id)_appThread_deepestDescendantOfFunctionRowElement:(id)a0 containingPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_appThread_deepestFocusableDescendantOfElement:(id)a0 leadingEdge:(char)a1;
- (char)_focusOntoElement:(id)a0 containedInsideFunctionRow:(id)a1;
- (void)_handleAnnouncementRequested:(id)a0;
- (void)_handleFocusValidationTimerFired;
- (void)_handleFocusedElementParentLayoutChanged:(id)a0;
- (void)_handleTitleChanged:(id)a0;
- (void)_handleUIElementDestroyed:(id)a0;
- (char)_moveFocusToAdjacentElementSearchingForward:(char)a0;
- (void)_refreshFunctionRows;
- (void)_refreshOrderedNavigableElements;
- (void)_validateCurrentFocusChain;
- (void)_validateFocus;
- (char)canActAsObserverTarget;
- (char)focusOntoElementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithApplicationManager:(id)a0;
- (char)moveFocusToElement:(id)a0;
- (char)moveFocusToNextElement;
- (char)moveFocusToPreviousElement;
- (void)scheduleFocusValidation;
- (void)setFocusedApplication:(id)a0;

@end
