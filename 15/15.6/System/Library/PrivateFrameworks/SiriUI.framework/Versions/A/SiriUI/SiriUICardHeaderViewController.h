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
@property char allowsStashing;
@property (retain) NSString *summaryTitle;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) char navigating;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)icon;
- (id)nibBundle;
- (void)setIcon:(id)a0;
- (void)setBackNavButtonHidden:(char)a0;
- (void)stashPressed:(id)a0;

@end
