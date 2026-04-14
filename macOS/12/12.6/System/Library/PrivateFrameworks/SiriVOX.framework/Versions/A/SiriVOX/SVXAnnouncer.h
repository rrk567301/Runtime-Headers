@class NSHashTable;

@interface SVXAnnouncer : NSObject {
    struct __CFDictionary { } *_protocolRequiredInstanceMethodSignaturesBySelector;
    struct __CFDictionary { } *_protocolOptionalInstanceMethodSignaturesBySelector;
    NSHashTable *_listeners;
}

+ (id)protocol;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)removeAllListeners;
- (void)_accessListenersUsingBlock:(id /* block */)a0;

@end
