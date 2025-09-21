@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (id)mainQueue;
+ (char)isActive;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)setMaxConcurrentOperationCount:(long long)a0;
- (void)cancelAllOperations;
- (id)operations;
- (void)setSuspended:(char)a0;

@end
