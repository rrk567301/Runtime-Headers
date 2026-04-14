@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (id)mainQueue;
+ (BOOL)isActive;

- (void)setSuspended:(BOOL)a0;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)addOperation:(id)a0;
- (id)init;
- (id)operations;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)dealloc;

@end
