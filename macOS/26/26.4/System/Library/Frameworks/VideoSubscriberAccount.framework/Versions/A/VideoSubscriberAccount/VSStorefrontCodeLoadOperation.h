@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
