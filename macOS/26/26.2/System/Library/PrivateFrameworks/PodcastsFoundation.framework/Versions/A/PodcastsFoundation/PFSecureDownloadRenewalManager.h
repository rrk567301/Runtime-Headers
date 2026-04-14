@class MTSecureDownloadRenewalManager;

@interface PFSecureDownloadRenewalManager : NSObject {
    MTSecureDownloadRenewalManager *_manager;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (void).cxx_destruct;
- (void)willEnterForeground;
- (id)init;
- (id)initWithURLProtocolDelegate:(id)a0;
- (void)requestSecureDeletionOfEpisodeWithAdamID:(long long)a0;
- (void)requestSecureDeletionOfOrphanedKeys;
- (void)updateDRMKeysForDownloads;

@end
