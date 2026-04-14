@class NSDate;

@interface ICNFIMAPClientDoneOperation : ICNFIMAPSingleClientOperation {
    BOOL _isReallyReady;
    BOOL _shouldQueueIdleWhenFinished;
    BOOL _didQueueIdle;
}

@property (retain) NSDate *resetDate;

- (void)setSequenceNumber:(unsigned long long)a0;
- (BOOL)isReady;
- (void)cancel;
- (id)init;
- (id)activityString;
- (void).cxx_destruct;
- (BOOL)alwaysAllowToComplete;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)setShouldQueueIdleWhenFinished:(BOOL)a0;
- (BOOL)updateReadiness;
- (BOOL)_shouldQueueIdleNow;
- (void)setResetDateEarlierThanNow;
- (BOOL)shouldQueueIdleWhenFinished;

@end
