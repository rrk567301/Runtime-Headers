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

- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (double)maximumRefreshRate;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (BOOL)isPaused;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)setFrameInterval:(long long)a0;
- (void)setUserInfo:(id)a0;
- (void)setPaused:(BOOL)a0;
- (id)userInfo;
- (long long)preferredFramesPerSecond;
- (long long)minimumFrameDuration;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)invalidate;
- (long long)priority;
- (void)setPriority:(long long)a0;
- (long long)actualFramesPerSecond;
- (long long)frameInterval;
- (void)dealloc;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)display;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void).cxx_destruct;
- (double)duration;
- (id)debugDescription;
- (double)timestamp;
- (double)targetTimestamp;
- (double)heartbeatRate;
- (unsigned int)highFrameRateReason;
- (id)init;
- (void)_NS_invalidateAsynchronously;

@end
