@class NSMutableArray, NSError, NSObject, OSPRequest;
@protocol OS_dispatch_queue;

@interface OSPOperationController : NSObject

@property (retain) OSPRequest *request;
@property (retain) NSMutableArray *operations;
@property (retain) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)_cleanUp;
- (id)personalize;
- (void)personalizeWithCompletionHandler:(id /* block */)a0;
- (void)_runOperations;
- (void)_addOperation:(id)a0;

@end
