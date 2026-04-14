@interface NSHMDDisplayLink : NSObject

@property (class, readonly) double currentTimestamp;

@property BOOL executesConcurrently;
@property (readonly, getter=isValid) BOOL valid;

- (void)resume;
- (void)invalidate;
- (void)suspend;

@end
