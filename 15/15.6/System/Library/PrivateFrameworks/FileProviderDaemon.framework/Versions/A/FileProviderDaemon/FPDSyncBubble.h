@interface FPDSyncBubble : NSObject

+ (char)runningInSyncBubble;

- (void)start;
- (void)startupFinished;
- (id)initWithExtensionManager:(id)a0;

@end
