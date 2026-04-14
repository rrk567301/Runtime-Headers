@interface PXForYouSettingAdvisoryFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;

- (id)createPlaceholderViewForFeedWithViewModel:(id)a0;
- (void)updatePlaceholderView:(id)a0 forFeedWithViewModel:(id)a1;

@end
