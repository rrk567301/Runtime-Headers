@class NSError, NSString, NSPopover;

@interface NSThemeAutosaveButton : NSButton <NSPopoverDelegate> {
    long long _editState;
    NSError *_autosavingError;
    id _animationCompletionBlock;
    id _showHideDelay;
    id _eventMonitor;
    id _flagsChangedEventMonitor;
    NSPopover *_documentPopover;
    NSError *_nonModalError;
    NSPopover *_alertPopover;
    BOOL _needsShowAlertPopover;
    BOOL _userIsIdleForAlertPopover;
}

@property (readonly) NSPopover *displayedPopover;
@property (copy) NSError *documentAutosavingError;
@property (copy) NSError *nonModalDocumentError;
@property (readonly) BOOL _shouldShowSeparatorField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)_textColorForDisplayingAlertPopover;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_documentWindow;
- (void)rightMouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)_buttonTitle;
- (void)popoverDidClose:(id)a0;
- (void)setDocumentEditingState:(long long)a0 animate:(BOOL)a1;
- (long long)documentEditingState;
- (void)_updateSeparatorFieldStringValue;
- (void)updateRolloverState;
- (BOOL)_performMouseDownWithEvent:(id)a0;
- (void)_showAlertPopoverIgnoringRecentEvents:(BOOL)a0;
- (void)_windowDidOrderOnScreen:(id)a0;
- (void)_setupAlertPopoverAutohideIgnoringRecentEvents:(BOOL)a0;
- (void)_userBecameIdleForAlertPopover;
- (void)_delayedHideAlertPopover;
- (id)_containingThemeFrame;
- (BOOL)_shouldColorTextForAlertPopover;
- (void)_cancelAnimationCompletionBlock;
- (BOOL)_arrowShouldBeHidden;
- (void)_setAnimationCompletionBlock:(id /* block */)a0 withDuration:(double)a1;
- (BOOL)_shouldShowDocumentPopoverWithMouseDownEvent:(id)a0;
- (void)_setTitleCellHighlighted:(BOOL)a0;
- (void)_showDocumentPopoverThenContinue:(id /* block */)a0;
- (void)_hidePopover;
- (void)_cancelFadeAnimationDelay;
- (void)_showOrHideArrowAnimate:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_repositionPopover;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverPositioningRectInSuperview;
- (void)_setTitleAndRedisplay:(id)a0;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;

@end
