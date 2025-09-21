@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    char _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_passesDidChange;
- (char)hasEmptyWalletPasses;
- (void)setHasEmptyWalletPasses:(char)a0;

@end
