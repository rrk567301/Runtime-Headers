@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)init;
- (void)clearAllIncompleteInferenceEvents;
- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void).cxx_destruct;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;

@end
