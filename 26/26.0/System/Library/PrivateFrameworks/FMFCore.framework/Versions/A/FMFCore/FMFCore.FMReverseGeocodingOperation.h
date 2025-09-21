@interface FMFCore.FMReverseGeocodingOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (void)start;
- (id)init;
- (void).cxx_destruct;

@end
