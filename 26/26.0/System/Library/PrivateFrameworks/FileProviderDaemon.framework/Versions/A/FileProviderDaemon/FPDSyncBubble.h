@interface FPDSyncBubble : NSObject

+ (BOOL)runningInSyncBubble;

- (void)start;
- (id)initWithExtensionManager:(id)a0;
- (void)startupFinished;

@end
