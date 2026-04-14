@class NSArray, NSOperationQueue;

@interface AVRoutingGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (id)description;
- (void)enqueueOperation:(id)a0;
- (id)init;
- (void)dealloc;

@end
