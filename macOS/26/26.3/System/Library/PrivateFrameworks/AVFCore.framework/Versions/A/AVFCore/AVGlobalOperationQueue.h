@class NSArray, NSOperationQueue;

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)enqueueOperation:(id)a0;

@end
