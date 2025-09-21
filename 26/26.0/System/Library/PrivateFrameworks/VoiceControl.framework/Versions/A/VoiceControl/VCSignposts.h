@interface VCSignposts : NSObject {
    void /* unknown type, empty encoding */ sVCSignposter;
}

@property (class, nonatomic, readonly) VCSignposts *shared;

- (id)init;
- (void).cxx_destruct;
- (void)axPress;
- (void)asrFinalResultReceived;
- (void)automationRecognizeStringEnd:(id)a0;
- (void)synthesizedAudioInputLastSample;
- (void)automationRecognizeStringBegin:(id)a0;
- (void)asrPartialResultReceived;
- (void)axFinalTextInsertion;
- (void)axPartialTextInsertion;
- (void)finalCommandReceivedInUI;
- (void)partialCommandReceivedInUI;
- (void)synthesizedAudioInputFirstSample;

@end
