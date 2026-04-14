@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void)_passesDidChange;
- (void)setHasEmptyWalletPasses:(BOOL)a0;
- (BOOL)hasEmptyWalletPasses;
- (void).cxx_destruct;
- (id)init;

@end
