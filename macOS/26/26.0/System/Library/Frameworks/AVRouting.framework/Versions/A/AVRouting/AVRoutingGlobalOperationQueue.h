@class NSArray, NSOperationQueue;

@interface AVRoutingGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (void)dealloc;
- (void)enqueueOperation:(id)a0;
- (id)init;
- (id)description;

@end
