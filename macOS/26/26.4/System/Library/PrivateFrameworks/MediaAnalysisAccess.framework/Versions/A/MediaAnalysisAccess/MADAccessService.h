@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MADAccessService : NSObject <MADAccessClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
}

+ (id)service;

- (id)connection;
- (void).cxx_destruct;
- (void)configureServerInterface:(id)a0;
- (id)init;
- (id)fetchSpotlightAssetsWithTypes:(id)a0 analysisVersions:(id)a1;

@end
