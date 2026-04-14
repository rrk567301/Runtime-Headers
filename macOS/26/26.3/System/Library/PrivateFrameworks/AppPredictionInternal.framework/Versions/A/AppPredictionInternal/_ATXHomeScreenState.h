@class NSArray, NSSet;

@interface _ATXHomeScreenState : NSObject

@property (readonly, nonatomic) NSArray *sortedPagesByUserLastVisit;
@property (readonly, nonatomic) NSSet *appsOnDock;

- (id)initWithSortedHomeScreenPagesByUserLastVisit:(id)a0 appsOnDock:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (id)init;
- (BOOL)containsSuggestedWidgetForApp:(id)a0;
- (BOOL)containsWidgetForIntent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShowingDuplicatedContentForSuggestion:(id)a0 considerUnderStackContents:(BOOL)a1 dedupeAppSuggestionsByWidgets:(BOOL)a2 ignoreDuplicatesInSGWidget:(BOOL)a3 ignoreDuplicatesInPanels:(BOOL)a4 ignoreTodayPage:(BOOL)a5;

@end
