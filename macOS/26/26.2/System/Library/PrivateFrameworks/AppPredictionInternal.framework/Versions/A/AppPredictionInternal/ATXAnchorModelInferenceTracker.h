@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (void)clearAllIncompleteInferenceEvents;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void).cxx_destruct;
- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (id)init;
- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;

@end
