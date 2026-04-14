@interface EKUIUnsubscribeGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)interestedChangeKeys;
+ (id)unsubscribeTitle;

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;

@end
