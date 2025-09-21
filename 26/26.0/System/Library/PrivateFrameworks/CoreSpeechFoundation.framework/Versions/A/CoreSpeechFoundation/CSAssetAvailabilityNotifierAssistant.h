@interface CSAssetAvailabilityNotifierAssistant : NSObject

+ (id)sharedInstance;

- (void)_cleanup;
- (id)init;
- (void)checkInAndNotifyAssetUpdate:(id)a0;
- (void)checkInForFirstLaunchAssetUpdate:(BOOL)a0;
- (void)checkedInAssetForFirstLaunchAssetUpdate:(id)a0;

@end
