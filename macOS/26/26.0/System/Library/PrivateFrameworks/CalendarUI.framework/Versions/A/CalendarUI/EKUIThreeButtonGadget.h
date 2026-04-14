@class NSView, NSArray, EKUIButton;

@interface EKUIThreeButtonGadget : EKUISingleViewGadget

@property (retain) EKUIButton *firstButton;
@property (retain) EKUIButton *secondButton;
@property (retain) EKUIButton *thirdButton;
@property (retain) NSView *control;
@property (retain) NSArray *buttonConstraints;

- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (void)updateButtons;
- (double)horizontalInset;
- (id)_buttonWithTitle:(id)a0;
- (id)firstButtonAccessibilityIdentifier;
- (void)firstButtonClicked:(id)a0;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (id)longestStringFromArray:(id)a0;
- (id)secondButtonAccessibilityIdentifier;
- (void)secondButtonClicked:(id)a0;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (id)thirdButtonAccessibilityIdentifier;
- (void)thirdButtonClicked:(id)a0;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;
- (void)updateWithChanges:(id)a0;

@end
