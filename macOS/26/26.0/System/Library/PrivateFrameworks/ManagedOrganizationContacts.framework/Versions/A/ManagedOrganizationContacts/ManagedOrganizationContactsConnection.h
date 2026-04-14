@class NSXPCConnection;

@interface ManagedOrganizationContactsConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)initWithEndpoint:(id)a0;
- (id)server:(id /* block */)a0;
- (void).cxx_destruct;

@end
