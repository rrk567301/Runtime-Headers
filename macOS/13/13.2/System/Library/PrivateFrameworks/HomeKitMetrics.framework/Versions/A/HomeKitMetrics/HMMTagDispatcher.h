@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTagDispatcher : NSObject <HMMTagDispatching>

@property (retain, nonatomic) NSMutableDictionary *tagObservers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (void)submitTag:(id)a0 processorList:(id)a1 dataBlock:(id /* block */)a2;
- (void)submitTag:(id)a0 processorList:(id)a1 data:(id)a2;
- (void)registerTagObserver:(id)a0 forTags:(id)a1;
- (void)unregisterTagObserver:(id)a0 forTags:(id)a1;

@end
