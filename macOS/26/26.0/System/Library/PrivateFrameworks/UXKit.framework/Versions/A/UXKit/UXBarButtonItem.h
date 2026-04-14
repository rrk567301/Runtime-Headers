@class NSView, NSString, NSMenu, UXViewController, NSToolbarItem, NSColor, NSLayoutAnchor;

@interface UXBarButtonItem : UXBarItem {
    NSView *__view;
    BOOL _wantsToUseCustomWidth;
}

@property (readonly, nonatomic) UXViewController *contentViewController;
@property (readonly, nonatomic) BOOL isSystemItem;
@property (readonly, nonatomic) long long systemItem;
@property (readonly, nonatomic) NSView *_view;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic, getter=isCondensed) BOOL condensed;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) float visibilityPriority;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) NSToolbarItem *toolbarItem;
@property (nonatomic, getter=isNavigational) BOOL navigational;
@property (weak, nonatomic, setter=_setWidthConstrainingItem:) UXBarButtonItem *_widthConstrainingItem;
@property (nonatomic) long long style;
@property (nonatomic) double width;
@property (retain, nonatomic) NSView *customView;
@property (retain, nonatomic) NSMenu *menu;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *toolTip;
@property (retain, nonatomic) NSString *keyEquivalent;
@property (nonatomic) unsigned long long keyEquivalentModifierMask;
@property (nonatomic) long long buttonState;
@property (nonatomic) BOOL ignoresMultiClick;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSLayoutAnchor *baselineAnchor;

- (void)setAccessibilityIdentifier:(id)a0;
- (BOOL)isEnabled;
- (void)setImage:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)image;
- (id)description;
- (void)setTitle:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithCustomView:(id)a0;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithBarButtonSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2;
- (id)initWithContentViewController:(id)a0;
- (id)_viewOfClass:(Class)a0;
- (id)initWithBarButtonSystemItem:(long long)a0 width:(double)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithStyle:(long long)a0 target:(id)a1 action:(SEL)a2;
- (double)preferredSpacingToItem:(id)a0 proposedSpacing:(double)a1;

@end
