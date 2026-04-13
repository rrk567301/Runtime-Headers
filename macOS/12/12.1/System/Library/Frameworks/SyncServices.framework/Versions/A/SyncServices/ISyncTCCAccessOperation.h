@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)finish:(BOOL)a0;

@end
