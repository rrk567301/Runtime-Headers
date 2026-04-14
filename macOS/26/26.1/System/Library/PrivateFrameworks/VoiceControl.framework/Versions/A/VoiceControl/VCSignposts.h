@interface VCSignposts : NSObject {
    void /* unknown type, empty encoding */ sVCSignposter;
}

@property (class, nonatomic, readonly) VCSignposts *shared;

- (void).cxx_destruct;
- (id)init;
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
