@class NSConnection;

@interface NSRemoteInputServer : NSInputServer {
    NSConnection *_connection;
}

- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (void)_invalidateConnectionsAsNecessary:(id)a0;
- (void)markedTextAbandoned:(id)a0;
- (void)terminate:(id)a0;

@end
