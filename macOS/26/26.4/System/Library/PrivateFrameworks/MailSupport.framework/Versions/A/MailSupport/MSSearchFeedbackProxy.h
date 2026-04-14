@interface MSSearchFeedbackProxy : NSObject {
    void /* unknown type, empty encoding */ feedbackListener;
    void /* unknown type, empty encoding */ feedbackQueue;
    void /* unknown type, empty encoding */ feedbackDebouncer;
    void /* unknown type, empty encoding */ queryProvider;
    void /* unknown type, empty encoding */ snapshotProvider;
    void /* unknown type, empty encoding */ sectionBuilder;
}

- (void).cxx_destruct;
- (id)init;
- (void)reportFeedbackWithQueryProvider:(id /* block */)a0 snapshotProvider:(id /* block */)a1 sectionBuilder:(id /* block */)a2;

@end
