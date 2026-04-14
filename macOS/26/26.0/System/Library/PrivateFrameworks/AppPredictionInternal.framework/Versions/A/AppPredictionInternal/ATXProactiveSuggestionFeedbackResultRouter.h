@class NSDictionary;

@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}

- (id)initWithFeedbackListeners:(id)a0;
- (id)init;
- (void)handleNewFeedbackResult:(id)a0;
- (void)_initializeFeedbackListenersDictWith:(id)a0;
- (void).cxx_destruct;
- (id)clientModelIdsWithFeedbackListeners;

@end
