@class NSString, NSDictionary;

@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {
    NSDictionary *_visibleAppsByPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)widgetSuggestionIsPinned:(id)a0 homeScreenPage:(id)a1 excludingStackConfigId:(id)a2;
- (id)_initWithVisibleAppsByPage:(id)a0;
- (char)_isContactsWidgetIntent:(id)a0 overlappingContactsWithOtherContactsWidgetIntent:(id)a1;
- (char)_isWidget:(id)a0 showingContentOfAction:(id)a1;
- (char)_isWidget:(id)a0 showingContentOfInfoSuggestion:(id)a1;
- (id)duplicateWidgetForWidgetSuggestion:(id)a0 otherWidgets:(id)a1;
- (id)executableClassStringsToUnarchiveDuringComparison;
- (char)executableSpecsAreDuplicates:(id)a0 otherExecutableSpec:(id)a1;
- (char)isWidget:(id)a0 showingIdenticalContentOfSuggestion:(id)a1;
- (id)pinnedWidgetIdentifiablesWithExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2 shouldStopAfterFindingFirstOne:(char)a3;
- (id)stacksToConsiderForLeftOfHomeForStackId:(id)a0 stacksOnPage:(id)a1;
- (id)stacksWithDuplicateWidgetExtensionId:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (id)stacksWithDuplicateWidgetSuggestion:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)suggestionIsDuplicate:(id)a0 appsOnHomeScreenPageAtIndex:(unsigned long long)a1;
- (char)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1;
- (char)suggestionIsDuplicate:(id)a0 existingSuggestions:(id)a1 shouldCompareAcrossTypes:(char)a2;
- (char)suggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1;
- (char)suggestionIsDuplicate:(id)a0 otherApps:(id)a1;
- (char)suggestionIsDuplicateAppOrWidget:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)suggestionsAreDuplicateActionAndLinkAction:(id)a0 otherSuggestion:(id)a1;
- (char)suggestionsAreDuplicateAppAndAction:(id)a0 otherSuggestion:(id)a1;
- (char)suggestionsAreDuplicateAppAndLinkAction:(id)a0 otherSuggestion:(id)a1;
- (char)suggestionsAreDuplicateWidgetAndAction:(id)a0 otherSuggestion:(id)a1;
- (char)widgetExtensionIdIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)widgetExtensionIdIsPinned:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;
- (char)widgetSuggestionIsDuplicate:(id)a0 homeScreenPageConfig:(id)a1 excludingStackConfigId:(id)a2;

@end
