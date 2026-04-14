@class NSString, CHSWidget, ATXTimelineAbuseControlConfig, ATXInfoSuggestionCriterionRegistry;
@protocol ATXTimelineRelevanceDelegate;

@interface ATXTimelineRelevance : NSObject {
    CHSWidget *_widget;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}

@property (weak, nonatomic) id<ATXTimelineRelevanceDelegate> delegate;
@property (readonly, nonatomic) NSString *sourceId;

+ (unsigned long long)suggestionLayoutOptionsForAvocadoSizeClass:(long long)a0;

- (id)infoSuggestionsFromTimelineEntries:(id)a0 latestInfoSuggestionRelevantNow:(id)a1;
- (id)infoSuggestionWithTimelineEntry:(id)a0;
- (BOOL)startDatesAreCloseEnoughToMerge:(id)a0 withTimelineEntry:(id)a1;
- (BOOL)overlapExistsBetween:(id)a0 andTimelineEntry:(id)a1;
- (BOOL)isWidgetFamilyEligibleForSuggestion;
- (void)processTimelineEntryWithNonPositiveScore:(id)a0 withPreviousInfoSuggestion:(id)a1 updatingTimelineEntryToSuggestionMapping:(id)a2;
- (void).cxx_destruct;
- (void)standardizeWidgetSizes;
- (id)processTimelineEntryWithPositiveScore:(id)a0 withPreviousInfoSuggestion:(id)a1 updatingTimelineEntryToSuggestionMapping:(id)a2;
- (id)initWithWidget:(id)a0 criterionRegistry:(id)a1 abuseControlConfig:(id)a2;
- (id)generateSuggestionsWithTimelineEntries:(id)a0 latestInfoSuggestionRelevantNow:(id)a1;

@end
