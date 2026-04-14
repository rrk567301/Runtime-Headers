@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration

- (id)init;
- (BOOL)wantsEmbeddedScrollView;
- (unsigned long long)gadgetType;
- (BOOL)allowsPopOnEmptyBehavior;
- (long long)horizontalGadgetStyle;
- (id)gadgetLocalizedTitle;
- (BOOL)wantsMultilineGadgetTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetAccessoryButtonLocalizedTitle;

@end
