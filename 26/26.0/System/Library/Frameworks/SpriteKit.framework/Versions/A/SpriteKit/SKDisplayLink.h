@class NSScreen, NSTimer;

@interface SKDisplayLink : NSObject {
    NSTimer *_timer;
    id _client;
    struct __CVDisplayLink { } *_cvDisplayLink;
    unsigned int _activeDisplayCount;
    unsigned int _activeDisplayIDs[10];
    SKDisplayLink *_keepAlive;
    NSScreen *_display;
    BOOL _paused;
    BOOL _callbackAlreadyInProgress;
    double _previousFrameTime;
    float _preferredFramesPerSecond;
    id /* block */ _block;
    float _averageFrameTime;
    long long _frameCount;
    double _frameCountBeginTime;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (retain, nonatomic) NSScreen *display;

+ (id)displayLinkWithDisplay:(id)a0 handler:(id /* block */)a1 client:(id)a2;

- (void)_setup;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)_teardown;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0 handler:(id /* block */)a1 client:(id)a2;
- (BOOL)_callbackAlreadyInProgress;
- (void)_callbackForNextFrame:(double)a0;
- (void)_setCallbackAlreadyInProgress:(BOOL)a0;

@end
