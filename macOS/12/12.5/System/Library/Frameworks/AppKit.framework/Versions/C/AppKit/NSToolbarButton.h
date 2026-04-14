@class NSView, NSString, NSToolbarItem;

@interface NSToolbarButton : NSButton {
    NSToolbarItem *_item;
    SEL _primaryAction;
    SEL _alternateAction;
    NSString *_primaryToolTip;
    NSString *_alternateToolTip;
    NSString *_primaryTitle;
    NSString *_alternateTitle;
    BOOL _showingRollover;
}

@property BOOL showingRollover;
@property (weak) NSView *focusRingView;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)_item;
- (void)setControlSize:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBordered:(BOOL)a0;
- (id)designatedFocusRingView;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (BOOL)sendAction;
- (BOOL)refusesFirstResponder;
- (void)setBezelColor:(id)a0;
- (id)initWithItem:(id)a0;
- (void)_updateImageScale;
- (void)_updateTitleAndLabelConfiguration;
- (void)_updateButtonStyle;
- (void)invalidateCachedDrawingImage;
- (id)cachedDrawingImage;

@end
