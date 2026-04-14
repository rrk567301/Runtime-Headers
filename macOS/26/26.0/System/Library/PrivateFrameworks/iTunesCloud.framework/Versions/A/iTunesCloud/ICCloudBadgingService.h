@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;

@interface ICCloudBadgingService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, weak, nonatomic) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;

- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (id)initWithListenerEndpointProvider:(id)a0;
- (void)reportAppIconBadgeActionMetrics;
- (void).cxx_destruct;

@end
