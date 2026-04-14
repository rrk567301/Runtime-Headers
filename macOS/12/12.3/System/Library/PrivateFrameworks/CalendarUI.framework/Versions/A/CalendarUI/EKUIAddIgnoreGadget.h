@interface EKUIAddIgnoreGadget : EKUIThreeButtonGadget

+ (id)ignoreTitle;
+ (id)addToCalendarTitle;

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)thirdButtonTitle;
- (id)firstButtonTitles;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;

@end
