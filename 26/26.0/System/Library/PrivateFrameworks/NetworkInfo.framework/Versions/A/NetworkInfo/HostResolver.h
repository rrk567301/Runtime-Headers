@class NSObject;
@protocol OS_dispatch_queue;

@interface HostResolver : NSObject {
    NSObject<OS_dispatch_queue> *queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)resolveHostname:(id)a0 withCompletion:(id /* block */)a1;

@end
