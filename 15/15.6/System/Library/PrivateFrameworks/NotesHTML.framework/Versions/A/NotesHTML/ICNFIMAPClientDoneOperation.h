@class NSDate;

@interface ICNFIMAPClientDoneOperation : ICNFIMAPSingleClientOperation {
    char _isReallyReady;
    char _shouldQueueIdleWhenFinished;
    char _didQueueIdle;
}

@property (retain) NSDate *resetDate;

- (id)init;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned long long)a0;
- (char)isReady;
- (void)cancel;
- (id)activityString;
- (char)alwaysAllowToComplete;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (char)setShouldQueueIdleWhenFinished:(char)a0;
- (char)updateReadiness;
- (char)_shouldQueueIdleNow;
- (void)setResetDateEarlierThanNow;
- (char)shouldQueueIdleWhenFinished;

@end
