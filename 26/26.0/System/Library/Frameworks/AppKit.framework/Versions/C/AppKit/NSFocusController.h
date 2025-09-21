@class NSView, NSArray, UIFocusSystem, NSHashTable, NSFocusItemCache, NSString, NSWindow;
@protocol UIFocusEnvironment;

@interface NSFocusController : NSObject <_UIFocusSystemDelegate, NSKeyViewContainer>

@property (class, readonly) NSHashTable *_allControllers;
@property (class, readonly) NSArray *allControllers;

@property (getter=isSynchronizingFirstResponder) BOOL synchronizingFirstResponder;
@property (readonly, getter=_isObservingSharedSession) BOOL _observingSharedSession;
@property (retain) NSFocusItemCache *focusItemCache;
@property (readonly) NSWindow *_rootWindow;
@property (readonly) UIFocusSystem *focusSystem;
@property (weak) id<UIFocusEnvironment> rootFocusEnvironment;
@property (readonly) BOOL allowsAnyValidFocusItem;
@property (readonly) NSArray *focusedEnvironments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSView *nextKeyView;
@property (readonly, nonatomic) NSView *previousKeyView;

+ (void)unregisterController:(id)a0;
+ (void)registerController:(id)a0;

- (void)dealloc;
- (void)_focusSystem:(id)a0 didFinishUpdatingFocusInContext:(id)a1;
- (void)_focusSystem:(id)a0 willUpdateFocusInContext:(id)a1;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)a0;
- (id)_focusItemContainerForFocusSystem:(id)a0;
- (void).cxx_destruct;
- (id)_firstResponderForEnvironment:(id)a0;
- (id)_movementInfoForHeading:(unsigned long long)a0;
- (void)_primitiveFirstResponderDidChange;
- (void)_primitiveSynchronizeFirstResponderForUpdate:(id)a0;
- (void)_synchronizeFirstResponderForUpdate:(id)a0;
- (void)firstResponderDidChange;
- (id)initWithRootFocusEnvironment:(id)a0;
- (void)initializeKeyViewLoop;
- (void)invalidateKeyViewLoop;
- (id)keyViewAdjacentToView:(id)a0 heading:(unsigned long long)a1;
- (id)keyViewFollowingView:(id)a0;
- (id)keyViewPrecedingView:(id)a0;
- (BOOL)navigateWithCommand:(long long)a0;
- (void)selectKeyViewAdjacentToView:(id)a0 heading:(unsigned long long)a1;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;
- (BOOL)selectKeyViewWithHeading:(unsigned long long)a0;
- (void)selectNextKeyView:(id)a0;
- (void)selectPreviousKeyView:(id)a0;

@end
