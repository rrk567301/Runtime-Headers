@class ClientConnection, CADXPCImplementation;

@interface CADOperationProxy : NSObject {
    ClientConnection *_conn;
    CADXPCImplementation *_implementation;
}

+ (BOOL)_selectorMayBeCalledBeforeInitialization:(SEL)a0;

- (void)clearCachedAuthorizationStatus;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithClientConnection:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)_emptyMethod;
- (id)_newImplementation;

@end
