@class BSServiceConnectionEndpoint;

@interface FBWorkspaceOutgoingConnection : FBWorkspaceConnection {
    char _queue_verified;
    BSServiceConnectionEndpoint *_queue_endpoint;
}

- (void).cxx_destruct;

@end
