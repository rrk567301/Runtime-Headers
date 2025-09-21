@interface FMFCore.FMReverseGeocodingOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) char finished;
@property (nonatomic, readonly) char asynchronous;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isFinished;
- (void)main;

@end
