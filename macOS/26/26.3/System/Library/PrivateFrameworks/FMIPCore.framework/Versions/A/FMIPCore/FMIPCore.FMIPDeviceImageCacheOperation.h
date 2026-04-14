@interface FMIPCore.FMIPDeviceImageCacheOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void)main;
- (void).cxx_destruct;

@end
