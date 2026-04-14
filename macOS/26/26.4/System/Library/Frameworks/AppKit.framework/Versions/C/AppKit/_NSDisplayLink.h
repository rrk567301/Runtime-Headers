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

- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (void)setPaused:(BOOL)a0;
- (BOOL)isPaused;
- (long long)frameInterval;
- (void)setFrameInterval:(long long)a0;
- (id)debugDescription;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (unsigned int)highFrameRateReason;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (double)timestamp;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)display;
- (void)setUserInfo:(id)a0;
- (void)setPriority:(long long)a0;
- (long long)priority;
- (long long)actualFramesPerSecond;
- (double)maximumRefreshRate;
- (long long)minimumFrameDuration;
- (double)duration;
- (void).cxx_destruct;
- (void)invalidate;
- (id)userInfo;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)init;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (long long)preferredFramesPerSecond;
- (double)heartbeatRate;
- (double)targetTimestamp;
- (void)dealloc;
- (void)_NS_invalidateAsynchronously;

@end
