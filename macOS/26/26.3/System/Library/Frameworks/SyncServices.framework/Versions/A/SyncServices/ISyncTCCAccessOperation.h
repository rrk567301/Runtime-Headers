@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)start;
- (void)finish:(BOOL)a0;

@end
