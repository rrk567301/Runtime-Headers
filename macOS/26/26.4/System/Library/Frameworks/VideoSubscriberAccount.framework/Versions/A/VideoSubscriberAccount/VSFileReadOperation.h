@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSURL *source;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
