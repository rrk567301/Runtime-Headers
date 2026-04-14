@class NSOperationQueue;

@interface HMFScheduler : HMFObject {
    NSOperationQueue *_operationQueue;
}

+ (id)defaultScheduler;
+ (id)mainScheduler;

- (id)performBlock:(id /* block */)a0;
- (id)performOperation:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2;
- (id)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2 qualityOfService:(long long)a3;
- (id)performWithQualityOfService:(long long)a0 block:(id /* block */)a1;

@end
