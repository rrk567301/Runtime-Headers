@class NSTextField, NSImageView, NSString, NSArray, NSLayoutConstraint, NSButton, NSAttributedString;

@interface SGBanner : NSControl <NSAccessibilityGroup>

@property (nonatomic) NSLayoutConstraint *imagesVerticalOffsetConstraint;
@property (nonatomic) NSLayoutConstraint *imageHorizontalOffsetConstraint;
@property (nonatomic) NSButton *actionButton;
@property (nonatomic) NSButton *closeButton;
@property (nonatomic) NSTextField *subtitleLabel;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSImageView *firstImageView;
@property (nonatomic) NSImageView *secondImageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSArray *images;
@property (readonly, nonatomic) unsigned long long bannerEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cancelImage;
+ (id)bannerFromNIB;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
- (void)updateConstraints;
- (void)onAction:(id)a0;
- (void)_setupViews;
- (void)onDismiss:(id)a0;

@end
