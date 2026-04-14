@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void)_passesDidChange;
- (void).cxx_destruct;
- (BOOL)hasEmptyWalletPasses;
- (id)init;
- (void)setHasEmptyWalletPasses:(BOOL)a0;

@end
