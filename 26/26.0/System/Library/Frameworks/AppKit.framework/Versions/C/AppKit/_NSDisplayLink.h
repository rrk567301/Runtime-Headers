@class _NSDisplayLinkForwarder, CADisplayLink, NSMutableSet, NSRunLoop;
@protocol _NSDisplayLinkInfoProvider;

@interface _NSDisplayLink : CADisplayLink {
    id<_NSDisplayLinkInfoProvider> _provider;
    id /* block */ _handler;
    _NSDisplayLinkForwarder *_forwarder;
    unsigned long long _options;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSRunLoop *_runLoop;
    id _keepAliveSelf;
    NSMutableSet *_runLoopModes;
    CADisplayLink *_underlyingDisplayLink;
    int _displayID;
    BOOL _providerPaused;
    BOOL _underlyingDisplayLinkWasAutoInvalidated;
    BOOL _clientPaused;
    struct CAFrameRateRange { float minimum; float maximum; float preferred; } _preferredFrameRateRange;
    id _userInfo;
    long long _priority;
}

+ (id)new;

- (void)setPaused:(BOOL)a0;
- (unsigned int)highFrameRateReason;
- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (long long)frameInterval;
- (long long)preferredFramesPerSecond;
- (id)debugDescription;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)dealloc;
- (void)invalidate;
- (double)timestamp;
- (void)setFrameInterval:(long long)a0;
- (long long)actualFramesPerSecond;
- (void)setPriority:(long long)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (long long)priority;
- (id)init;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (BOOL)isPaused;
- (double)maximumRefreshRate;
- (id)display;
- (double)heartbeatRate;
- (double)targetTimestamp;
- (void)setUserInfo:(id)a0;
- (long long)minimumFrameDuration;
- (double)duration;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (id)userInfo;
- (void).cxx_destruct;

@end
