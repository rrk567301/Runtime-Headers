@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (id)operations;
- (void)setSuspended:(BOOL)a0;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
