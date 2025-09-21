@class NSXPCConnection;

@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void)requestRecentLocationsWithResponse:(id /* block */)a0;
- (void).cxx_destruct;

@end
