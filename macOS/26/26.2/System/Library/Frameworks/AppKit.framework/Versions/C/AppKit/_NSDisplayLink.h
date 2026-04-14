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

- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (void)invalidate;
- (void)setPaused:(BOOL)a0;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (double)duration;
- (long long)priority;
- (double)maximumRefreshRate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)isPaused;
- (void)setPriority:(long long)a0;
- (id)display;
- (unsigned int)highFrameRateReason;
- (id)debugDescription;
- (long long)minimumFrameDuration;
- (void)setUserInfo:(id)a0;
- (double)targetTimestamp;
- (long long)frameInterval;
- (id)userInfo;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (double)heartbeatRate;
- (long long)preferredFramesPerSecond;
- (long long)actualFramesPerSecond;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (void)setFrameInterval:(long long)a0;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (id)init;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (void)_NS_invalidateAsynchronously;

@end
