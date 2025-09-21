@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void).cxx_destruct;
- (void)setLatestSyncToken:(id)a0 forSyncType:(id)a1;
- (id)latestSyncToken;
- (char)_deviceConditionsAllowsMessageSync;
- (char)_deviceConditionsAllowsMessageSyncForActivity:(id)a0 deviceConditionsToCheck:(unsigned long long)a1 currentBatchCount:(long long)a2 maxBatchCount:(long long)a3;
- (char)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (char)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(char)a0;
- (char)_kickOffWriteIfNeededForSyncType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)ckUtilities;
- (void)setLatestSyncToken:(id)a0;

@end
