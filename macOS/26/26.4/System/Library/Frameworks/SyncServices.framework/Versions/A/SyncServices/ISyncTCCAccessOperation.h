@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)start;
- (void)finish:(BOOL)a0;

@end
