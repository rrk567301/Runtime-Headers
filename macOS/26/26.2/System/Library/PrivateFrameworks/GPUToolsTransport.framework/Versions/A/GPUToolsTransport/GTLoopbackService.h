@class NSObject;
@protocol OS_dispatch_queue;

@interface GTLoopbackService : NSObject <GTLoopbackService> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (id)echo:(id)a0;
- (id)init;
- (void)echo:(id)a0 completionHandler:(id /* block */)a1;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2 complete:(id /* block */)a3;

@end
