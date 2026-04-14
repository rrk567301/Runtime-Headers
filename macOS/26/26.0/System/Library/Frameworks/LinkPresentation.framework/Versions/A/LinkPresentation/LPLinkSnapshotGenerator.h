@class NSMutableDictionary, NSXPCConnection;

@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    NSMutableDictionary *_pendingCompletionHandlers;
    unsigned int _nextRequestID;
    BOOL _active;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connectionWasInvalidated;
- (void)snapshotForMetadata:(id)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;

@end
