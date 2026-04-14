@class NSTextField, NSString, NSImage, PRSImageView, NSLayoutConstraint;

@interface PRSSportsSummaryScoreSliceView : NSView

@property (retain, nonatomic) NSImage *leftImage;
@property (retain, nonatomic) NSImage *rightImage;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) NSString *leftImageSubtitle;
@property (retain, nonatomic) NSString *rightImageSubtitle;
@property (retain, nonatomic) NSString *leftImageAxLabel;
@property (retain, nonatomic) NSString *rightImageAxLabel;
@property PRSImageView *leftImageView;
@property PRSImageView *rightImageView;
@property NSTextField *leftImageViewLabelTextField;
@property NSTextField *rightImageViewLabelTextField;
@property NSTextField *titleTextField;
@property NSTextField *subTitleTextField;
@property (weak) NSLayoutConstraint *leadingImageConstraint;
@property (weak) NSLayoutConstraint *trailingImageConstraint;
@property (weak) NSLayoutConstraint *titleTopBaselineConstraint;
@property (weak) NSLayoutConstraint *labelToBottomConstraint;
@property (weak) NSLayoutConstraint *subtitleTitleEqualWidthConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (void)resizeSubtitles;
- (long long)getHeightForText:(id)a0 maxSize:(long long)a1 font:(id)a2;

@end
