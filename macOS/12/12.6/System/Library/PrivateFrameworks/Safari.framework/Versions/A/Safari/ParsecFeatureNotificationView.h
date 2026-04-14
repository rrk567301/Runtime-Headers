@class NSArray, NSView, ConfigurableVibrancyTextView, NSLayoutConstraint;

@interface ParsecFeatureNotificationView : NSView

@property (weak, nonatomic) NSView *iconContainer;
@property (nonatomic) ConfigurableVibrancyTextView *descriptionTextView;
@property (weak, nonatomic) NSLayoutConstraint *descriptionTextViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *iconContainerBottomToDescriptionTextViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *descriptionTextViewBottomConstraint;
@property (copy, nonatomic) NSArray *iconFilenames;

- (void).cxx_destruct;
- (void)setDescriptionText:(id)a0 helpLinkText:(id)a1;
- (double)preferredMinimumWidth;
- (double)preferredHeightAtCurrentWidth;

@end
