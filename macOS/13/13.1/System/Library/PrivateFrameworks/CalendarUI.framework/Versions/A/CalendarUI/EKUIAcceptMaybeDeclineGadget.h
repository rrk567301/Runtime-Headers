@interface EKUIAcceptMaybeDeclineGadget : EKUIThreeButtonGadget

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;

@end
