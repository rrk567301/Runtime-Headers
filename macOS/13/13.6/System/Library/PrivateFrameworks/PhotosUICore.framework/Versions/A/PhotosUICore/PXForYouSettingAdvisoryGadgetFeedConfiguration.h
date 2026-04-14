@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration

- (id)init;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (unsigned long long)gadgetType;
- (long long)horizontalGadgetStyle;
- (BOOL)wantsEmbeddedScrollView;
- (BOOL)wantsMultilineGadgetTitle;

@end
