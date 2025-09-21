@class NSString, NSImage, NSMenu, NSSegmentedControl;

@interface NSComboButton : NSControl {
    long long _style;
    NSMenu *_menu;
    NSString *_title;
    NSImage *_image;
    unsigned long long _imageScaling;
}

@property (retain, nonatomic) NSSegmentedControl *_segmentedControl;
@property (copy) NSString *title;
@property (retain) NSImage *image;
@property unsigned long long imageScaling;
@property (retain) NSMenu *menu;
@property long long style;

+ (id)_comboButtonWithTitle:(id)a0 image:(id)a1 menu:(id)a2 target:(id)a3 action:(SEL)a4;
+ (Class)_controlClassSupportingNoCell;
+ (char)_controlClassSupportsNoCell;
+ (Class)_defaultCellClass;
+ (char)accessibilityIsSingleCelled;
+ (Class)cellClass;
+ (id)comboButtonWithImage:(id)a0 menu:(id)a1 target:(id)a2 action:(SEL)a3;
+ (id)comboButtonWithTitle:(id)a0 image:(id)a1 menu:(id)a2 target:(id)a3 action:(SEL)a4;
+ (id)comboButtonWithTitle:(id)a0 menu:(id)a1 target:(id)a2 action:(SEL)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (void)setAction:(SEL)a0;
- (void)setAlignment:(long long)a0;
- (void)setBaseWritingDirection:(long long)a0;
- (void)setFormatter:(id)a0;
- (void)setLineBreakMode:(unsigned long long)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)setHighlighted:(char)a0;
- (char)_allowsContextMenus;
- (void)_commonInit;
- (void)_configureAccessibility;
- (void)_configureSegmentedControl;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (char)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_forwardingAction:(id)a0;
- (void)_subscribeToNotificationsForMenu:(id)a0;
- (void)_unsubscribeFromNotificationsForMenu:(id)a0;
- (char)accessibilityIsIgnored;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)performClick:(id)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setCell:(id)a0;
- (void)setFont:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUsesSingleLineMode:(char)a0;

@end
