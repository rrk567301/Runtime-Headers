@class NSXPCConnection;

@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)requestRecentLocationsWithResponse:(id /* block */)a0;
- (id)init;

@end
