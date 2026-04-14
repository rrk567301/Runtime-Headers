@class NSDate;

@interface ICNFIMAPClientDoneOperation : ICNFIMAPSingleClientOperation {
    BOOL _isReallyReady;
    BOOL _shouldQueueIdleWhenFinished;
    BOOL _didQueueIdle;
}

@property (retain) NSDate *resetDate;

- (id)init;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned long long)a0;
- (void)cancel;
- (BOOL)isReady;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)alwaysAllowToComplete;
- (BOOL)shouldQueueIdleWhenFinished;
- (BOOL)setShouldQueueIdleWhenFinished:(BOOL)a0;
- (BOOL)_shouldQueueIdleNow;
- (BOOL)updateReadiness;
- (void)setResetDateEarlierThanNow;

@end
