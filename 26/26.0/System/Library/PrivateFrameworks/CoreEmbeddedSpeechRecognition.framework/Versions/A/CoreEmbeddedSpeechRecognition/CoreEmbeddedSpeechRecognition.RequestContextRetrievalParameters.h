@class NSString;

@interface CoreEmbeddedSpeechRecognition.RequestContextRetrievalParameters : NSObject {
    void /* unknown type, empty encoding */ maxNumEnrolled;
    void /* unknown type, empty encoding */ retrievalTimeout;
    void /* unknown type, empty encoding */ maxEntityChars;
    void /* unknown type, empty encoding */ maxEntityWords;
    void /* unknown type, empty encoding */ rejectedContextTypes;
    void /* unknown type, empty encoding */ rejectedBundleTypes;
    void /* unknown type, empty encoding */ enabledTasks;
    void /* unknown type, empty encoding */ requestTask;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
