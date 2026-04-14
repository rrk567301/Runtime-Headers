@interface SCROBrailleUILiveCaptionsManager : NSObject <ScreenReaderOutput.BRUILiveCaptionsCallManagerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ isTranscribing;
    void /* unknown type, empty encoding */ sourceType;
}

@property (nonatomic) BOOL isSourceAudio;

- (id)initWithClient:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (id)init;
- (void)allActiveCallsEnded;
- (void)callConnected;

@end
