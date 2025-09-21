@class CADisplayLink;

@interface NSDisplayLink1 : NSObject {
    CADisplayLink *_underlyingDisplayLink;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isInvalid;
}

@property (class, readonly) double currentTimestamp;

@property (readonly, getter=isValid) BOOL valid;
@property (getter=isPaused) BOOL paused;
@property (readonly) double timestamp;
@property (readonly) double duration;
@property double desiredInterval;

+ (id)displayLinkForScreen:(id)a0 handler:(id /* block */)a1;

- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void).cxx_destruct;
- (id)initWithScreen:(id)a0 handler:(id /* block */)a1;

@end
