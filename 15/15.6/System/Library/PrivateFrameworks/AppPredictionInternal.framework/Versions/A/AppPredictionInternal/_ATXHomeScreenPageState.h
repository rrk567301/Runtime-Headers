@class _ATXHomeScreenState, NSArray, ATXStackStateTracker, ATXHomeScreenPage;

@interface _ATXHomeScreenPageState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
}

@property (readonly, weak, nonatomic) _ATXHomeScreenState *homeScreen;
@property (readonly, nonatomic) ATXHomeScreenPage *config;
@property (readonly, nonatomic) NSArray *stacks;

- (id)init;
- (void).cxx_destruct;
- (id)pinnedSGWidgets;
- (char)suggestionsWidgetOnPageIsShowingDuplicatedContentForSuggestion:(id)a0;
- (char)isSeldomVisited;
- (char)_isShowingApp:(id)a0 allowFolder:(char)a1;
- (char)containsSGWidget;
- (char)containsSuggestedWidgetForApp:(id)a0;
- (char)containsWidgetForIntent:(id)a0;
- (id)initWithHomeScreenState:(id)a0 pageConfig:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (char)isShowingDuplicatedContentForSuggestion:(id)a0 considerUnderStackContents:(char)a1 dedupeAppSuggestionsByWidgets:(char)a2 ignoreDuplicatesInSGWidget:(char)a3 ignoreDuplicatesInPanels:(char)a4;
- (id)pinnedAPPs;

@end
