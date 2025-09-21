@class NSLayoutConstraint, NSArray, _MKRightImageButton, NSString, NSImage, _MKUILabel, NSFont;

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    char _contentChanged;
    double _width;
}

@property (retain, nonatomic) _MKUILabel *sectionHeaderLabel;
@property (retain, nonatomic) _MKRightImageButton *seeMoreButton;
@property (retain, nonatomic) NSArray *seeMoreButtonConstraints;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) NSFont *seeMoreButtonFont;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconDisplaySize;
@property (nonatomic) char showSeeMoreButton;
@property (nonatomic) char seeMoreButtonAlwaysOnNewLine;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)createConstraints;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (char)shouldStack;
- (void)updateContent;

@end
