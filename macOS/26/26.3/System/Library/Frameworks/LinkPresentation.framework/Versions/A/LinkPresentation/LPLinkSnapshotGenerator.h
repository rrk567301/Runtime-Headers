@class NSMutableDictionary, NSXPCConnection;

@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    NSMutableDictionary *_pendingCompletionHandlers;
    unsigned int _nextRequestID;
    BOOL _active;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionWasInvalidated;
- (void)snapshotForMetadata:(id)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;

@end
