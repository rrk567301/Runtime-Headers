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
    struct CAFrameRateRange { float minimum; float maximum; float preferred; } _preferredFrameRateRange;
    id _userInfo;
    long long _priority;
    BOOL _providerPaused;
    BOOL _underlyingDisplayLinkWasAsynchronouslyInvalidated;
    BOOL _clientPaused;
    BOOL _isFiring;
    BOOL _needsUpdate;
    BOOL _requiresMainThreadUpdating;
}

+ (id)new;

- (void)invalidate;
- (void)setPaused:(BOOL)a0;
- (void)setUserInfo:(id)a0;
- (void)setFrameInterval:(long long)a0;
- (double)maximumRefreshRate;
- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (unsigned int)highFrameRateReason;
- (double)duration;
- (id)debugDescription;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (long long)preferredFramesPerSecond;
- (id)display;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (id)init;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (long long)actualFramesPerSecond;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)setPriority:(long long)a0;
- (long long)priority;
- (double)heartbeatRate;
- (void).cxx_destruct;
- (BOOL)isPaused;
- (void)dealloc;
- (double)timestamp;
- (long long)frameInterval;
- (double)targetTimestamp;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (id)userInfo;
- (long long)minimumFrameDuration;
- (void)_NS_invalidateAsynchronously;

@end
