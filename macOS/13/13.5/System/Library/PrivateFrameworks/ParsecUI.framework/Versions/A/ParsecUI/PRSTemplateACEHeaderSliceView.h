@class NSView, NSString, NSTextField, PRSImageView, PRSActionButtonImageView, NSImage, SFPunchout, NSLayoutConstraint;

@interface PRSTemplateACEHeaderSliceView : NSView {
    NSString *_subtitleText;
    NSString *_descriptionText;
}

@property (retain, nonatomic) NSImage *primaryImage;
@property (retain, nonatomic) NSImage *playImage;
@property (retain, nonatomic) NSImage *baseImage;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) NSString *playText;
@property (retain, nonatomic) SFPunchout *punchout;
@property BOOL showVerticalDivider;
@property BOOL needsRoundedImage;
@property NSLayoutConstraint *imageToViewLeadingConstraint;
@property NSLayoutConstraint *imageToViewTopConstraint;
@property NSLayoutConstraint *imageToViewBottomConstraint;
@property NSLayoutConstraint *imageToTitleConstraint;
@property NSLayoutConstraint *titleBottomToSubtitleBottomConstraint;
@property NSLayoutConstraint *subtitleBottomToDescriptionBottomConstraint;
@property NSLayoutConstraint *imageToTextConstraint;
@property NSLayoutConstraint *titleBottomToViewTopConstraint;
@property NSLayoutConstraint *separatorHeightConstraint;
@property NSLayoutConstraint *separatorToPlayImageConstraint;
@property NSLayoutConstraint *playImageToOverlayTextConstraint;
@property PRSImageView *primaryImageView;
@property PRSActionButtonImageView *playImageView;
@property PRSActionButtonImageView *baseImageView;
@property NSView *separatorView;
@property NSTextField *titleTextField;
@property NSTextField *subTitleTextField;
@property NSTextField *playTextField;

- (void).cxx_destruct;
- (id)image;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)descriptionText;
- (void)hideLineView;

@end
