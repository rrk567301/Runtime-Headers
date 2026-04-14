@interface PXSharedLibrarySharingSuggestionsFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (id)createPlaceholderViewForFeedWithViewModel:(id)a0;
- (void)updatePlaceholderView:(id)a0 forFeedWithViewModel:(id)a1;

@end
