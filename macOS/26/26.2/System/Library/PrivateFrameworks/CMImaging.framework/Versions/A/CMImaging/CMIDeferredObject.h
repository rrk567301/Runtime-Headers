@class NSObject;

@interface CMIDeferredObject : NSProxy {
    id /* block */ _realizeBlock;
    BOOL _realized;
    NSObject *_actualValue;
}

- (id)initWithBlock:(id /* block */)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)_realize;

@end
