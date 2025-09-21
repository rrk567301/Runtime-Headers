@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish:(BOOL)a0;

@end
