@class NSArray, NSSet;

@interface _ATXHomeScreenState : NSObject

@property (readonly, nonatomic) NSArray *sortedPagesByUserLastVisit;
@property (readonly, nonatomic) NSSet *appsOnDock;

- (id)init;
- (void).cxx_destruct;
- (char)containsSuggestedWidgetForApp:(id)a0;
- (char)containsWidgetForIntent:(id)a0;
- (id)initWithSortedHomeScreenPagesByUserLastVisit:(id)a0 appsOnDock:(id)a1 stackStateTracker:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (char)isShowingDuplicatedContentForSuggestion:(id)a0 considerUnderStackContents:(char)a1 dedupeAppSuggestionsByWidgets:(char)a2 ignoreDuplicatesInSGWidget:(char)a3 ignoreDuplicatesInPanels:(char)a4 ignoreTodayPage:(char)a5;

@end
