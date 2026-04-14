@class NSMutableDictionary, NSXPCConnection;

@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    NSMutableDictionary *_pendingCompletionHandlers;
    unsigned int _nextRequestID;
    BOOL _active;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)connectionWasInvalidated;
- (void)snapshotForMetadata:(id)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;

@end
