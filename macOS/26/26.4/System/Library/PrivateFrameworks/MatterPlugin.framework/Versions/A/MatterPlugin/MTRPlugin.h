@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (BOOL)stop;
- (id)init;
- (BOOL)start;
- (void)_pairingStartedNotification:(id)a0;
- (void)_pairingStoppedNotification:(id)a0;

@end
