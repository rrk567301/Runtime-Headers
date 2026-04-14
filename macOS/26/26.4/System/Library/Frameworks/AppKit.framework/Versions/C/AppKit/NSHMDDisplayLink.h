@interface NSHMDDisplayLink : NSObject

@property (class, readonly) double currentTimestamp;

@property BOOL executesConcurrently;
@property (readonly, getter=isValid) BOOL valid;

- (void)resume;
- (void)suspend;
- (void)invalidate;

@end
