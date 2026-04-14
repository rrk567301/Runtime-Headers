@interface EKUIAcceptMaybeDeclineGadget : EKUIThreeButtonGadget

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)secondButtonTitle;
- (id)thirdButtonTitle;
- (id)firstButtonTitles;
- (id)secondButtonTitles;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;

@end
