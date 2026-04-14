@class NSString, AMSDaemonConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AMSDeviceMessengerServiceInterface;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface> {
    id<AMSDeviceMessengerServiceInterface> _proxyObject;
}

@property (retain) AMSDaemonConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableArray *updateHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)deviceMessengerDidReceiveMessage:(id)a0;
- (void)deviceMessengerDidReceiveReply:(id)a0;
- (void)deviceMessengerDidClearMessage:(id)a0;
- (void)deviceMessengerDidUpdateDevices;
- (void)addUpdateHandlerForType:(long long)a0 filter:(id)a1 handler:(id /* block */)a2;
- (id)sendDialog:(id)a0 account:(id)a1;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:(id)a0;
- (void)_sendDelegateUpdateForMessage:(id)a0;

@end
