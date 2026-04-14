@class NSView, NSArray, EKUIButton;

@interface EKUIThreeButtonGadget : EKUISingleViewGadget

@property (retain) EKUIButton *firstButton;
@property (retain) EKUIButton *secondButton;
@property (retain) EKUIButton *thirdButton;
@property (retain) NSView *control;
@property (retain) NSArray *buttonConstraints;

- (void).cxx_destruct;
- (void)updateButtons;
- (double)preferredWidth;
- (void)updateConstraints;
- (BOOL)needsExpansion;
- (id)initWithViewController:(id)a0;
- (void)updateWithChanges:(id)a0;
- (id)firstButtonTitle;
- (id)secondButtonTitle;
- (id)thirdButtonTitle;
- (id)firstButtonTitles;
- (id)secondButtonTitles;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;
- (id)_buttonWithTitle:(id)a0;
- (id)longestStringFromArray:(id)a0;

@end
