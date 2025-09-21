@interface MarqueeViewWithTextView : MarqueeView

- (void)mouseEntered:(id)a0;
- (void)finishInit;
- (void)_createMarqueeAnimationIfNeeded;
- (double)_contentFittingWidth;
- (void)removePriorAnimationAndStartANewOneIfNeeded;
- (void)triggerAnimationIfNeeded;

@end
