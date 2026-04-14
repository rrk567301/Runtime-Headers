@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (BOOL)hasEmptyWalletPasses;
- (void).cxx_destruct;
- (void)setHasEmptyWalletPasses:(BOOL)a0;
- (id)init;
- (void)_passesDidChange;

@end
