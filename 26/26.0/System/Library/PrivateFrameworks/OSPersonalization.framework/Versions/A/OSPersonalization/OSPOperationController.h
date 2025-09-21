@class NSMutableArray, NSError, NSObject, OSPRequest;
@protocol OS_dispatch_queue;

@interface OSPOperationController : NSObject

@property (retain) OSPRequest *request;
@property (retain) NSMutableArray *operations;
@property (retain) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) NSError *error;

- (id)initWithRequest:(id)a0;
- (void)_cleanUp;
- (void)_addOperation:(id)a0;
- (void).cxx_destruct;
- (void)_runOperations;
- (id)personalize;
- (void)personalizeWithCompletionHandler:(id /* block */)a0;

@end
