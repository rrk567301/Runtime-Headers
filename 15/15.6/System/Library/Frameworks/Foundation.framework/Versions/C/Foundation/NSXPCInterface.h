@class Protocol;

@interface NSXPCInterface : NSObject {
    Protocol *_protocol;
    unsigned long long _remoteVersion;
    struct __CFDictionary { } *_knownSelectors;
    struct __CFDictionary { } *_methodInfo;
    Class _xpcDOSubclass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _knownSelectorsLock;
    char _specialCaseObject;
}

@property Protocol *protocol;

+ (id)_SFL_serviceInterface;
+ (id)__btm_serviceInterface;
+ (id)interfaceWithProtocol:(id)a0;
+ (id)signatureForBlock:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (unsigned long long)version;
- (void)setClass:(Class)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(char)a3;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(char)a3;
- (void)setInterface:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(char)a3;
- (Class)_customSubclass;
- (struct _xpc_type_s { } *)XPCTypeForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(char)a2;
- (id)replyBlockSignatureForSelector:(SEL)a0;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)a0;
- (char)_hasProxiesInArgumentsOfSelector:(SEL)a0;
- (char)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)a0;
- (id)_interfaceForArgument:(unsigned long long)a0 ofSelector:(SEL)a1 reply:(char)a2;
- (id)_methodSignatureForRemoteSelector:(SEL)a0;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)a0;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)a0;
- (Class)_returnClassForSelector:(SEL)a0;
- (char)_selectorIsAllowed:(SEL)a0 isReply:(char)a1 methodSignature:(id *)a2 allowedClasses:(id *)a3;
- (char)_specialCaseObject;
- (Class)classForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(char)a2;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(char)a2;
- (id)interfaceForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(char)a2;
- (void)setReplyBlockSignature:(id)a0 forSelector:(SEL)a1;
- (void)setVersion:(unsigned long long)a0 forSelector:(SEL)a1;
- (void)setXPCType:(struct _xpc_type_s { } *)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(char)a3;
- (void)set_remoteVersion:(unsigned long long)a0;
- (unsigned long long)versionForSelector:(SEL)a0;

@end
