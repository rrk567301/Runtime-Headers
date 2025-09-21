@interface NSHMDDisplayLink : NSObject

@property (class, readonly) double currentTimestamp;

@property char executesConcurrently;
@property (readonly, getter=isValid) char valid;

- (void)invalidate;
- (void)resume;
- (void)suspend;

@end
