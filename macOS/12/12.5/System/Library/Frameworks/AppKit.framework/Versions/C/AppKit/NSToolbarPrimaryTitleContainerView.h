@class NSTextField, NSDocumentAutosaveButton, NSThemeDocumentButton, NSStackView, NSLayoutConstraint, NSButton, NSWindow;

@interface NSToolbarPrimaryTitleContainerView : NSView {
    NSStackView *_primaryTitleStack;
    BOOL _alwaysShowDocumentProxy;
    NSLayoutConstraint *_leadingTitleConstraint;
    NSLayoutConstraint *_leadingDocumentConstraint;
    NSLayoutConstraint *_trailingTitleConstraint;
}

@property (weak) NSWindow *representedWindow;
@property (readonly) NSTextField *titleTextField;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (readonly) double expandedWidth;
@property (readonly) BOOL showsDocumentProxy;
@property (readonly) BOOL isShowingAutosavePopup;
@property (readonly) BOOL isShowingDocumentMenu;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mouseHoverSensitiveRect;
@property (readonly) NSButton *fileButton;
@property (readonly) NSDocumentAutosaveButton *autosaveButton;
@property (readonly) NSThemeDocumentButton *documentProxyButton;

+ (id)keyPathsForValuesAffectingIsShowingAutosavePopup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)rightMouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)firstBaselineAnchor;
- (id)newAutosaveButton;
- (BOOL)_performMouseDownWithEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxTitleRect;
- (void)_configureWithRepresentedURL:(id)a0;
- (void)_configureForShowingAutosave:(BOOL)a0 editingState:(long long)a1 autosavingError:(id)a2 nonModalError:(id)a3;
- (id)newDocumentProxyButton;
- (void)_alwaysShowDocumentProxyChanged;
- (void)expand;
- (void)collapse;
- (void)expandCollapseAnimationDidFinish;
- (void)_showDocumentPopover;
- (void)_showAutosavePopover;
- (void)updateTextPropertiesWithFont:(id)a0;
- (void)updateTitleProperties:(id)a0;
- (BOOL)_shouldToolbarStealEvent:(id)a0;

@end
