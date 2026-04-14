@interface SCROBrailleUILiveCaptionsManager : NSObject {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ isTranscribing;
}

@property (nonatomic) BOOL isSourceAudio;

- (id)initWithClient:(id)a0;
- (void)stop;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (id)init;
- (void).cxx_destruct;

@end
