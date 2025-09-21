@class NSArray, NSSet, NSString, ATXHomeScreenWidgetIdentifiable;

@interface ATXFakeSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    char _blanketValueIsSet;
    char _existingSuggestionsReturnValueIsSet;
    char _homeScreenPageReturnValueIsSet;
    char _duplicateWidgetReturnValueIsSet;
}

@property (nonatomic) char blanketReturnValue;
@property (nonatomic) char existingSuggestionsReturnValue;
@property (nonatomic) char homeScreenPageReturnValue;
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *duplicateWidgetReturnValue;
@property (retain, nonatomic) NSArray *pinnedWidgetSuggestions;
@property (retain, nonatomic) NSSet *appsOnPage;
@property (retain, nonatomic) NSArray *suggestionsInRecentlyEngagedCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;
- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;
- (char)isWidget:(id)a0 showingIdenticalContentOfSuggestion:(id)a1;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(char)a3;
- (char)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (char)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (char)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1 shouldCompareAcrossTypes:(char)a2;
- (char)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (char)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (char)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;

@end
