@class NSString, _HKXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HKDaemonConnection : NSObject <_HKXPCExportable, HKProxyProviderSource> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
    NSString *_daemonLaunchDarwinNotificationName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy, nonatomic) NSString *daemonLaunchDarwinNotificationName;

+ (id)connectionWithListenerEndpoint:(id)a0 launchNotificationName:(id)a1;
+ (id)connectionWithMachServiceName:(id)a0 launchNotificationName:(id)a1;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)init;
- (void)dealloc;
- (void)fetchEndpointForServiceIdentifier:(id)a0 endpointHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)endpointForServiceIdentifier:(id)a0 error:(id *)a1;

@end
