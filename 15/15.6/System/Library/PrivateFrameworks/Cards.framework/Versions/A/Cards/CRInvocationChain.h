@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue, CRInvocationChainDelegate;

@interface CRInvocationChain : NSObject {
    NSObject<OS_dispatch_queue> *_chainedObjectsAccessQueue;
}

@property (retain, nonatomic, getter=_chainedObjects, setter=_setChainedObjects:) NSPointerArray *chainedObjects;
@property (weak, nonatomic) id<CRInvocationChainDelegate> delegate;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)addChainedObject:(id)a0;
- (void)_accessChainedObjectsSafely:(id /* block */)a0;
- (void)_addChainedObject:(id)a0;
- (void)_enumerateChainedObjectsUsingBlock:(id /* block */)a0;
- (void)_forwardInvocation:(id)a0;
- (char)_isEligibleForSelector:(SEL)a0;
- (id)_methodSignatureForSelector:(SEL)a0;
- (char)_respondsToSelector:(SEL)a0;
- (void)enumerateChainedObjectsUsingBlock:(id /* block */)a0;
- (char)isEligibleForSelector:(SEL)a0;

@end
