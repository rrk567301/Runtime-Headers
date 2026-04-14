@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MADAccessService : NSObject <MADAccessClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
}

+ (id)service;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)configureServerInterface:(id)a0;
- (id)fetchSpotlightAssetsWithTypes:(id)a0 sceneProcessingVersion:(unsigned long long)a1 ocrProcessingVersion:(unsigned long long)a2;

@end
