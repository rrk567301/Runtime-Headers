@class NSXPCConnection;

@interface ManagedOrganizationContactsConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)server:(id /* block */)a0;

@end
