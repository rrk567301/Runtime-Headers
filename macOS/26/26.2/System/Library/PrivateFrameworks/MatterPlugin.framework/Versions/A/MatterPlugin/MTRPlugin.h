@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (BOOL)stop;
- (BOOL)start;
- (id)init;
- (void)_pairingStartedNotification:(id)a0;
- (void)_pairingStoppedNotification:(id)a0;

@end
