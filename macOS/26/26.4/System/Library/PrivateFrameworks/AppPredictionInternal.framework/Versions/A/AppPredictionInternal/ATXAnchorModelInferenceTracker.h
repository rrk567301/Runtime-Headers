@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;
- (void)clearAllIncompleteInferenceEvents;
- (void)persistInferenceEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;

@end
