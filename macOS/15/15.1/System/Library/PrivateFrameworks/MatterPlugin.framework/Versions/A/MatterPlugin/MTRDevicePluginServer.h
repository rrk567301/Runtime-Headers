@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, MTRDevicePluginServerDelegate;

@interface MTRDevicePluginServer : NSObject <MTRDeviceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcConnection;
    id<MTRDevicePluginServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_deviceControllerMap;
    NSMutableDictionary *_deviceControllerConnectionMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addController:(id)a0;
- (void)removeController:(id)a0;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (void)deviceBecameActive:(id)a0;
- (void)addControllers:(id)a0;
- (id)controllerConnectionForDevice:(id)a0 deviceControllerUniqueIdentifierString:(id)a1;
- (id)controllerForUniqueIdentifierString:(id)a0;
- (void)handleDeviceControllerInitWithParameters_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 responseIdentifierString:(id)a5;
- (void)handleDeviceEstimatedStartTime_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 responseIdentifierString:(id)a5 nodeID:(id)a6;
- (void)handleDeviceInvokeCommand_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 responseIdentifierString:(id)a5 nodeID:(id)a6 endpointID:(id)a7 clusterID:(id)a8 commandID:(id)a9 commandFields:(id)a10 expectedValues:(id)a11 expectedValueInterval:(id)a12 timedInvokeTimeout:(id)a13 serverSideProcessingTimeout:(id)a14;
- (void)handleDeviceReadAttribute_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 responseIdentifierString:(id)a5 nodeID:(id)a6 endpointID:(id)a7 clusterID:(id)a8 attributeID:(id)a9 filterByFabric:(BOOL)a10;
- (void)handleDeviceRegisterDelegate_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 nodeID:(id)a5;
- (void)handleDeviceUnregisterDelegate_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 nodeID:(id)a5;
- (void)handleDeviceWriteAttribute_xpcConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionBlock:(id /* block */)a3 controllerIdentifierString:(id)a4 nodeID:(id)a5 endpointID:(id)a6 clusterID:(id)a7 attributeID:(id)a8 value:(id)a9 expectedValueInterval:(id)a10 timedWriteTimeout:(id)a11;
- (void)handleXPCConnection:(id)a0 messageEvent:(id)a1;
- (id)initWithName:(const char *)a0 delegate:(id)a1 queue:(id)a2 knownControllers:(id)a3;
- (void)processReceivedMessage:(id)a0;

@end
