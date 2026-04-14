@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (BOOL)hasEmptyWalletPasses;
- (id)init;
- (void).cxx_destruct;
- (void)_passesDidChange;
- (void)setHasEmptyWalletPasses:(BOOL)a0;

@end
