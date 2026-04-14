@class NSTextField, NSString, NSView, NSLayoutGuide, NSColor, NSImage, NSLayoutConstraint, NSImageView;

@interface PKPaymentAuthorizationPreferenceView : NSView

@property (retain, nonatomic) NSTextField *primaryTextField;
@property (retain, nonatomic) NSTextField *secondaryTextField;
@property (retain, nonatomic) NSImageView *badgeView;
@property (retain, nonatomic) NSLayoutGuide *textFieldLeadingLayoutGuide;
@property (retain, nonatomic) NSLayoutGuide *textFieldTrailingLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineConstraint;
@property (nonatomic) BOOL hasValidConstraints;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) NSColor *primaryBadgeColor;
@property (retain, nonatomic) NSView *iconView;
@property (retain, nonatomic) NSImage *badge;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double verticalMargin;
@property (readonly, nonatomic) NSString *accessibilityLabelForMenuItem;

+ (id)_resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
+ (id)viewWithContact:(id)a0 selected:(BOOL)a1 keys:(id)a2 errors:(id)a3;
+ (id)_viewWithShippingMethodPreference:(id)a0 atIndex:(unsigned long long)a1;
+ (id)_viewWithContactPreference:(id)a0 atIndex:(unsigned long long)a1;
+ (id)_viewWithRemoteDevicePreference:(id)a0 atIndex:(unsigned long long)a1;
+ (id)_viewWithCardPreference:(id)a0 atIndex:(unsigned long long)a1;
+ (id)viewWithContact:(id)a0 keys:(id)a1;
+ (id)viewWithPaymentPreference:(id)a0 atIndex:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setBackgroundStyle:(long long)a0;
- (void)_prepareConstraints;
- (id)_primaryTextAttributedStringWithString:(id)a0 selected:(BOOL)a1;
- (id)_secondaryTextAttributedStringWithString:(id)a0 selected:(BOOL)a1;
- (void)_calculatePrimaryFirstBaselineMargin:(double *)a0 primaryLastBaselineMargin:(double *)a1 secondaryFirstBaselineMargin:(double *)a2 secondaryLastBaselineMargin:(double *)a3 lastBaselineMarginForOverallHeight:(double *)a4;
- (id)_primaryTextColorSelected:(BOOL)a0;
- (id)_primaryTextFont;
- (id)_attributedStringWithString:(id)a0 color:(id)a1 font:(id)a2;
- (id)_secondaryTextColorSelected:(BOOL)a0;

@end
