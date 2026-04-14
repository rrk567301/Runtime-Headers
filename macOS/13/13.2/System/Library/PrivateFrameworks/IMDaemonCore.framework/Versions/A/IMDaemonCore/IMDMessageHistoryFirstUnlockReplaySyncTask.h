@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {
    IMDReplayController *_replayController;
}

- (void)dealloc;
- (unsigned long long)syncTaskType;
- (void)_setupAndBeginSync;
- (id)initWithReplayController:(id)a0 accountController:(id)a1;

@end
