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

- (void).cxx_destruct;
- (id)init;
- (void)deviceMessengerDidReceiveReply:(id)a0;
- (id)_getProxyObject;
- (void)deviceMessengerDidClearMessage:(id)a0;
- (void)deviceMessengerDidUpdateDevices;
- (id)_identifierFromDialogRequest:(id)a0;
- (void)_sendDelegateUpdateForMessage:(id)a0;
- (void)addUpdateHandlerForType:(long long)a0 filter:(id)a1 handler:(id /* block */)a2;
- (void)deviceMessengerDidReceiveMessage:(id)a0;
- (id)sendDialog:(id)a0 account:(id)a1;

@end
