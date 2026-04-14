@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (id)mainQueue;
+ (BOOL)isActive;

- (void)dealloc;
- (id)init;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)setSuspended:(BOOL)a0;
- (id)operations;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)cancelAllOperations;

@end
