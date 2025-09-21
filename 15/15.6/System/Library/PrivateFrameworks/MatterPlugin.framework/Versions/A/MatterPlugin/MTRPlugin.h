@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (id)init;
- (char)start;
- (char)stop;
- (void)_pairingStartedNotification:(id)a0;
- (void)_pairingStoppedNotification:(id)a0;

@end
