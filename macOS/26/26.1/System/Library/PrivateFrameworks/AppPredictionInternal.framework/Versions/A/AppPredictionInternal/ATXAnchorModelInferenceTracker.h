@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)inferenceEventsToTryAgain;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (id)fetchPersistedInferenceEvents;
- (void).cxx_destruct;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)clearAllIncompleteInferenceEvents;
- (id)init;

@end
