@class NSHashTable;

@interface SVXAnnouncer : NSObject

@property (nonatomic) struct __CFDictionary { } *protocolRequiredInstanceMethodSignaturesBySelector;
@property (nonatomic) struct __CFDictionary { } *protocolOptionalInstanceMethodSignaturesBySelector;
@property (retain, nonatomic) NSHashTable *listeners;

+ (id)protocol;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeAllListeners;
- (id)init;
- (void)_accessListenersUsingBlock:(id /* block */)a0;

@end
