@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (void)setSuspended:(BOOL)a0;
- (void)cancelAllOperations;
- (id)operations;
- (void)addOperation:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (id)init;

@end
