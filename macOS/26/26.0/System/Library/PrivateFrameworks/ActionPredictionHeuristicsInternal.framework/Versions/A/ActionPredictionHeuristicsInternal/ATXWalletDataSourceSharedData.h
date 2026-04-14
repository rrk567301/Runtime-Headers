@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (id)init;
- (void)setHasEmptyWalletPasses:(BOOL)a0;
- (BOOL)hasEmptyWalletPasses;
- (void)_passesDidChange;
- (void).cxx_destruct;

@end
