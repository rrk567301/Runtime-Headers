@class NSXPCConnection;

@interface ManagedOrganizationContactsConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)server:(id /* block */)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;

@end
