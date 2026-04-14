@interface SCROBrailleUILiveCaptionsManager : NSObject <ScreenReaderOutput.BRUILiveCaptionsCallManagerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ isTranscribing;
    void /* unknown type, empty encoding */ sourceType;
}

@property (nonatomic) BOOL isSourceAudio;

- (void)startWithCompletionHandler:(void (^)(void))a0;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (id)initWithClient:(id)a0;
- (void)dealloc;
- (void)allActiveCallsEnded;
- (void)callConnected;

@end
