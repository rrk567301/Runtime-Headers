@class NSImageView, NSString, NSImage, NSLayoutConstraint, SiriUIButton;
@protocol SiriUICardHeaderViewControllerDelegate;

@interface SiriUICardHeaderViewController : NSViewController

@property (weak) NSImageView *iconView;
@property (retain) SiriUIButton *backNavigationButton;
@property (retain) NSLayoutConstraint *backNavigationButtonLeadingConstraintToContainer;
@property (retain) NSLayoutConstraint *backNavigationButtonTrailingConstraintToImageView;
@property (retain) NSLayoutConstraint *backNavigationButtonVerticalConstraint;
@property (retain) NSLayoutConstraint *imageViewLeadingConstraintToContainer;
@property (weak, nonatomic) id<SiriUICardHeaderViewControllerDelegate> delegate;
@property BOOL allowsStashing;
@property (retain) NSString *summaryTitle;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) BOOL navigating;

- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (id)icon;
- (void)awakeFromNib;
- (id)nibBundle;
- (void)stashPressed:(id)a0;
- (void)setBackNavButtonHidden:(BOOL)a0;

@end
