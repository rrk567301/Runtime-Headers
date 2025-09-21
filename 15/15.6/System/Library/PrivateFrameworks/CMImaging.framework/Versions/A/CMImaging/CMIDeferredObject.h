@class NSObject;

@interface CMIDeferredObject : NSProxy {
    id /* block */ _realizeBlock;
    char _realized;
    NSObject *_actualValue;
}

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)_realize;

@end
