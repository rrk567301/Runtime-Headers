@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (id)operations;
- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)setSuspended:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
