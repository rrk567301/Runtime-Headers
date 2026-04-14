@class NSOperationQueue, VSOptional;

@interface VSFetchAllSupportedAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
