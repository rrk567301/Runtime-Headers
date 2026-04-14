@interface SCROBrailleUILiveCaptionsManager : NSObject <ScreenReaderOutput.BRUILiveCaptionsCallManagerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ isTranscribing;
    void /* unknown type, empty encoding */ sourceType;
}

@property (nonatomic) BOOL isSourceAudio;

- (id)initWithClient:(id)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (void)dealloc;
- (void)allActiveCallsEnded;
- (void)callConnected;

@end
