@class _ATXHomeScreenState, NSArray, ATXStackStateTracker, ATXHomeScreenPage;

@interface _ATXHomeScreenPageState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
}

@property (readonly, weak, nonatomic) _ATXHomeScreenState *homeScreen;
@property (readonly, nonatomic) ATXHomeScreenPage *config;
@property (readonly, nonatomic) NSArray *stacks;

- (id)pinnedSGWidgets;
- (id)initWithHomeScreenState:(id)a0 pageConfig:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (id)init;
- (BOOL)containsSuggestedWidgetForApp:(id)a0;
- (id)pinnedAPPs;
- (BOOL)containsWidgetForIntent:(id)a0;
- (void).cxx_destruct;
- (BOOL)suggestionsWidgetOnPageIsShowingDuplicatedContentForSuggestion:(id)a0;
- (BOOL)isShowingDuplicatedContentForSuggestion:(id)a0 considerUnderStackContents:(BOOL)a1 dedupeAppSuggestionsByWidgets:(BOOL)a2 ignoreDuplicatesInSGWidget:(BOOL)a3 ignoreDuplicatesInPanels:(BOOL)a4;
- (BOOL)containsSGWidget;
- (BOOL)isSeldomVisited;
- (BOOL)_isShowingApp:(id)a0 allowFolder:(BOOL)a1;

@end
