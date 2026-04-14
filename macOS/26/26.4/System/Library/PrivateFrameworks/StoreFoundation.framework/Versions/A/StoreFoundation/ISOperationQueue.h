@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (id)operations;
- (void)cancelAllOperations;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (id)init;
- (void)setSuspended:(BOOL)a0;
- (void)dealloc;

@end
