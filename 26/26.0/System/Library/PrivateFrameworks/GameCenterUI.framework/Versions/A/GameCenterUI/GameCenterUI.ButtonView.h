@class NSString, NSBezierPath, _TtC12GameCenterUI20DynamicTypeTextField, NSFont, NSAttributedString;

@interface GameCenterUI.ButtonView : GameCenterUI.ClickableView {
    void /* unknown type, empty encoding */ _allowsVibrancy;
    void /* unknown type, empty encoding */ titleColor;
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ actionBlockTrampoline;
}

@property (class, nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } defaultLayoutMargins;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMinimumSize;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } defaultMaximumSize;
@property (class, nonatomic, readonly) NSFont *defaultFont;

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabelView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic, retain) NSFont *titleFont;
@property (nonatomic) BOOL includeLastBaselineMeasurement;
@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textLayoutFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundRect;
@property (nonatomic, readonly) NSBezierPath *backgroundPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;
@property (nonatomic) BOOL isImportantForAccessibility;

+ (struct CGSize { double x0; double x1; })estimatedSizeWithFitting:(struct CGSize { double x0; double x1; })a0 title:(id)a1 font:(id)a2 layoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 minimumSize:(struct CGSize { double x0; double x1; })a4 maximumSize:(struct CGSize { double x0; double x1; })a5 in:(id)a6;
+ (id)makeBorderlessButton;
+ (id)makeRoundedButton;
+ (id)makeTitleLabelView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (void)sizeToFit;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityShouldUseUniqueId;
- (void)drawFocusRingMask;
- (void)didChangeState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalBackgroundColor:(id)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })titleLabelSizeWithFitting:(struct CGSize { double x0; double x1; })a0;
- (void)updateTitleLabelViewAppearance;

@end
