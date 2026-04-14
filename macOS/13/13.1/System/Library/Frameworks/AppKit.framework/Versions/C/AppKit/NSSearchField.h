@class NSString, NSArray, NSMenu;
@protocol NSSearchFieldDelegate;

@interface NSSearchField : NSTextField <_NSBridgedSearchField> {
    struct { unsigned char _inTransition : 1; unsigned char _reselecting : 1; unsigned char _isSearching : 1; unsigned int _reserved : 29; } _sfFlags;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

@property (getter=isEnabled) BOOL enabled;
@property (setter=_setFocusRingAnimationType:) long long _focusRingAnimationType;
@property (readonly) NSString *stringValue;
@property unsigned long long controlSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchTextBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchButtonBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelButtonBounds;
@property (copy) NSArray *recentSearches;
@property (copy) NSString *recentsAutosaveName;
@property (retain) NSMenu *searchMenuTemplate;
@property BOOL sendsWholeSearchString;
@property long long maximumRecents;
@property BOOL sendsSearchStringImmediately;
@property (weak) id<NSSearchFieldDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (void)updateCell:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)mouseUp:(id)a0;
- (void)selectText:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_windowDidOrderOffScreen;
- (void)keyUp:(id)a0;
- (void)_windowResignedKeyStatus:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (id)_animationCompletionBlocks;
- (id)_eventsNeedingReposting;
- (id)_previousResponder;
- (BOOL)centersPlaceholder;
- (void)setCentersPlaceholder:(BOOL)a0;
- (BOOL)searchFieldCell:(id)a0 shouldChangeCancelButtonVisibility:(BOOL)a1;
- (void)_setAnimationCompletionBlocks:(id)a0;
- (void)_addPostAnimationBlock:(id /* block */)a0;
- (void)_createPostAnimationQueueWithBlock:(id /* block */)a0;
- (void)_invokePostAnimationBlocks;
- (void)_transitionForFirstResponder:(BOOL)a0 completion:(id /* block */)a1;
- (void)_setEventsNeedingReposting:(id)a0;
- (void)_addEventToBeRepostedAfterTransition:(id)a0;
- (void)_setPreviousResponder:(id)a0;
- (void)_updateSearchingState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchTextWhenCentered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchButtonWhenCentered:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCancelButtonWhenCentered:(BOOL)a0;
- (BOOL)isCurrentlyEditing;
- (id)ns_widgetType;

@end
