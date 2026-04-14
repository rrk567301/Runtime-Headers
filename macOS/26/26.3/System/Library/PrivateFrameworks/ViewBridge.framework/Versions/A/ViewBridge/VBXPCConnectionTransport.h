@class NSString, VBXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface VBXPCConnectionTransport : NSObject <_NSXPCTransport> {
    VBXPCConnection *_connection;
    int _cachedProcessIdentifier;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _repliesPending;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _repliesPendingLock;
}

@property (retain) NSObject<OS_xpc_object> *underlyingConnection;
@property (copy) id /* block */ messageHandlerBlock;
@property (copy) id /* block */ errorHandlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)setTargetQueue:(id)a0;
- (void)suspend;
- (struct { unsigned int x0[8]; })auditToken;
- (id)sendMessageWithReplySync:(id)a0;
- (int)processIdentifier;
- (id)initWithConnection:(id)a0;
- (int)auditSessionIdentifier;
- (void)resume;
- (void)sendMessage:(id)a0;
- (void)setMessageHandler:(id /* block */)a0;
- (unsigned int)effectiveUserIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)effectiveGroupIdentifier;
- (void)setErrorHandler:(id /* block */)a0;
- (void)activate;
- (id).cxx_construct;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendNotification:(id)a0;

@end
