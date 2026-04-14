@class NSArray, BSServiceQueue, BSXPCServiceConnection, RBSTarget, NSObject, BSObjCProtocol, RBSAssertion, BSServiceDispatchQueue;
@protocol OS_xpc_object, BSXPCServiceConnectionHandshake;

@interface BSXPCServiceConnectionProxy : NSObject {
    BSXPCServiceConnection *_connection;
    id<BSXPCServiceConnectionHandshake> _lock_handshake;
    BSObjCProtocol *_remoteProtocol;
    NSObject<OS_xpc_object> *_underlyingConnection;
    BSServiceDispatchQueue *_targetQueue;
    BSServiceQueue *_replyQueue;
    RBSTarget *_target;
    NSArray *_attributes;
    id /* block */ _assertionProvider;
    RBSAssertion *_lock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_messagesCount;
    unsigned int _activationGeneration;
}

- (void)dealloc;

@end
