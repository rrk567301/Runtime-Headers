@class Protocol;

@interface NSXPCInterface : NSObject {
    Protocol *_protocol;
    void *_reserved2;
    id _reserved1;
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
- (void)setClass:(Class)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)setInterface:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)a0;
- (id)_methodSignatureForRemoteSelector:(SEL)a0;
- (id)_interfaceForArgument:(unsigned long long)a0 ofSelector:(SEL)a1 reply:(BOOL)a2;
- (Class)_returnClassForSelector:(SEL)a0;
- (BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)a0;
- (Class)_customSubclass;
- (BOOL)_specialCaseObject;
- (BOOL)_selectorIsAllowed:(SEL)a0 isReply:(BOOL)a1 methodSignature:(id *)a2 allowedClasses:(id *)a3;
- (unsigned long long)_remoteVersion;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)a0;
- (id)interfaceForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (void)setXPCType:(struct _xpc_type_s { } *)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (const struct _xpc_type_s { } *)XPCTypeForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (Class)classForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (void)setReplyBlockSignature:(id)a0 forSelector:(SEL)a1;
- (id)replyBlockSignatureForSelector:(SEL)a0;
- (void)setVersion:(unsigned long long)a0 forSelector:(SEL)a1;
- (unsigned long long)versionForSelector:(SEL)a0;
- (void)set_remoteVersion:(unsigned long long)a0;
- (unsigned long long)_respondsToRemoteSelector:(SEL)a0;
- (BOOL)_hasProxiesInArgumentsOfSelector:(SEL)a0;

@end
