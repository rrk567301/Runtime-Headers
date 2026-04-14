@class NSString, VBXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface VBXPCConnectionTransport : NSObject <_NSXPCTransport> {
    VBXPCConnection *_connection;
    int _cachedProcessIdentifier;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _repliesPending;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _repliesPendingLock;
}

@property (retain) NSObject<OS_xpc_object> *underlyingConnection;
@property (copy) id /* block */ messageHandlerBlock;
@property (copy) id /* block */ errorHandlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)auditSessionIdentifier;
- (id)initWithConnection:(id)a0;
- (void)sendMessage:(id)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)cancel;
- (void)suspend;
- (int)processIdentifier;
- (void)resume;
- (void)setMessageHandler:(id /* block */)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (id).cxx_construct;
- (id)sendMessageWithReplySync:(id)a0;
- (void)activate;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendNotification:(id)a0;

@end
