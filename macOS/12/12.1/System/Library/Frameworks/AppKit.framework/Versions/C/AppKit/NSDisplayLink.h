@interface NSDisplayLink : NSObject

@property (class, readonly) double currentTimestamp;

@property BOOL executesConcurrently;
@property (getter=isPaused) BOOL paused;

- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;

@end
