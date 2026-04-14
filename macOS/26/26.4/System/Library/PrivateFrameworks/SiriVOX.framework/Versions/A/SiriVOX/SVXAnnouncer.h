@class NSHashTable;

@interface SVXAnnouncer : NSObject

@property (nonatomic) struct __CFDictionary { } *protocolRequiredInstanceMethodSignaturesBySelector;
@property (nonatomic) struct __CFDictionary { } *protocolOptionalInstanceMethodSignaturesBySelector;
@property (retain, nonatomic) NSHashTable *listeners;

+ (id)protocol;

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeAllListeners;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)_accessListenersUsingBlock:(id /* block */)a0;

@end
