@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (void)finish:(BOOL)a0;

@end
