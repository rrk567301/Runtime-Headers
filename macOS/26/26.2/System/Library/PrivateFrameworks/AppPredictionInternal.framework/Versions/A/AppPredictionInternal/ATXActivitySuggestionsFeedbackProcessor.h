@class ATXActivitySuggestionFeedbackStream, ATXActivitySuggestionsFeedbackHistogramHelper;

@interface ATXActivitySuggestionsFeedbackProcessor : NSObject {
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
}

+ (id)queue;

- (void).cxx_destruct;
- (id)init;
- (void)processFeedbackWithXPCActivity:(id)a0;
- (id)_activitySuggestionsFeedbackBookmark;
- (id)initWithFeedbackStream:(id)a0 feedbackHistogramHelper:(id)a1;

@end
