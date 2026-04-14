@interface VCSignposts : NSObject {
    void /* unknown type, empty encoding */ sVCSignposter;
}

@property (class, nonatomic, readonly) VCSignposts *shared;

- (void).cxx_destruct;
- (id)init;
- (void)automationRecognizeStringBegin:(id)a0;
- (void)synthesizedAudioInputLastSample;
- (void)axPress;
- (void)asrFinalResultReceived;
- (void)asrPartialResultReceived;
- (void)automationRecognizeStringEnd:(id)a0;
- (void)axFinalTextInsertion;
- (void)axPartialTextInsertion;
- (void)finalCommandReceivedInUI;
- (void)partialCommandReceivedInUI;
- (void)synthesizedAudioInputFirstSample;

@end
