@class PXSharedLibrarySharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsFeedActionPerformer;

@interface PXSharedLibrarySharingSuggestionsFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsFeedActionPerformer *actionPerformer;

- (id)init;
- (id)localizedSubtitle;
- (id)initWithDataSourceManager:(id)a0;
- (BOOL)wantsEmbeddedScrollView;
- (unsigned long long)gadgetType;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)createSeeAllViewController;
- (long long)horizontalGadgetStyle;
- (id)gadgetLocalizedTitle;
- (BOOL)wantsMultilineGadgetTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (id)objectReferenceForDestination:(id)a0;
- (void)handleContentSeen;
- (void)handleContentDismissed;

@end
