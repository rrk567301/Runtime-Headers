@class NSString, NSDictionary;

@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSDictionary *_visibleAppsByPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)executableSpecsAreDuplicates:(id)a0 otherExecutableSpec:(id)a1;
- (BOOL)suggestionsAreDuplicateAppAndAction:(id)a0 otherSuggestion:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1 shouldCompareAcrossTypes:(BOOL)a2;
- (BOOL)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)suggestionsAreDuplicateWidgetAndAction:(id)a0 otherSuggestion:(id)a1;
- (id)init;
- (id)stacksWithDuplicateWidgetExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)isWidget:(id)a0 showingIdenticalContentOfSuggestion:(id)a1;
- (id)stacksToConsiderForLeftOfHomeForStackId:(id)a0 stacksOnPage:(id)a1;
- (BOOL)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)executableClassStringsToUnarchiveDuringComparison;
- (BOOL)suggestionsAreDuplicateActionAndLinkAction:(id)a0 otherSuggestion:(id)a1;
- (BOOL)suggestionsAreDuplicateAppAndLinkAction:(id)a0 otherSuggestion:(id)a1;
- (id)_initWithVisibleAppsByPage:(id)a0;
- (BOOL)_isWidget:(id)a0 showingContentOfAction:(id)a1;
- (BOOL)_bundleIdsAreRemoteAndNativeEquivalents:(id)a0 otherBundleId:(id)a1;
- (BOOL)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (BOOL)_isContactsWidgetIntent:(id)a0 overlappingContactsWithOtherContactsWidgetIntent:(id)a1;
- (BOOL)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)_isWidget:(id)a0 showingContentOfInfoSuggestion:(id)a1;
- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;
- (id)stacksWithDuplicateWidgetSuggestion:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (BOOL)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(BOOL)a3;
- (BOOL)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (void).cxx_destruct;
- (BOOL)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;

@end
