@interface FMIPCore.FMReverseGeocodingOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (void)start;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;

@end
