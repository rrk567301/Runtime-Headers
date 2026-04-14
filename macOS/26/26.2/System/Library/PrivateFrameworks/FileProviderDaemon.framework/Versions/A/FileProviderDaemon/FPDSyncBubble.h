@interface FPDSyncBubble : NSObject

+ (BOOL)runningInSyncBubble;

- (id)initWithExtensionManager:(id)a0;
- (void)start;
- (void)startupFinished;

@end
