@interface SiriUI.LoopedVideoPlayerView : NSView {
    void /* unknown type, empty encoding */ playerLayer;
    void /* unknown type, empty encoding */ queuePlayer;
    void /* unknown type, empty encoding */ playbackLooper;
    void /* unknown type, empty encoding */ videoReadyObservation;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ variation;
}

@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop;
- (void)pause;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isReadyForDisplay;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)unload;
- (BOOL)loadAndReturnError:(id *)a0;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 name:(id)a1 variation:(BOOL)a2;

@end
