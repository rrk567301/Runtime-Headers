@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void).cxx_destruct;
- (void)setLatestSyncToken:(id)a0 forSyncType:(id)a1;
- (id)latestSyncToken;
- (char)_deviceConditionsAllowsMessageSyncForActivity:(id)a0 deviceConditionsToCheck:(unsigned long long)a1 currentBatchCount:(long long)a2 maxBatchCount:(long long)a3;
- (char)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)a0 maxBatchCount:(long long)a1;
- (char)_kickOffWriteIfNeededForSyncType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)ckUtilities;
- (void)setLatestSyncToken:(id)a0;
- (void)syncMessagesWithSyncType:(long long)a0 deviceConditionsToCheck:(unsigned long long)a1 activity:(id)a2 completionBlock:(id /* block */)a3;

@end
