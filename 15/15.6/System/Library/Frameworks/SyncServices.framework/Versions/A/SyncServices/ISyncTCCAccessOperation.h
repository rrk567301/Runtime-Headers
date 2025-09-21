@interface ISyncTCCAccessOperation : NSOperation {
    char _isExecuting;
    char _isFinished;
}

@property (readonly) char accessGranted;

- (void)start;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)finish:(char)a0;

@end
