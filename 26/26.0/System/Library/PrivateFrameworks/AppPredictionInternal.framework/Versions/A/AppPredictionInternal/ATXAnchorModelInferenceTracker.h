@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;
- (id)init;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)clearAllIncompleteInferenceEvents;
- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void).cxx_destruct;

@end
