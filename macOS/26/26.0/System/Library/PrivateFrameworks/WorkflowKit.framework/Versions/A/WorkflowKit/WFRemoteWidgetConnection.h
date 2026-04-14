@class NSString, NSMutableArray, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, OS_xpc_object, WFRemoteWidgetConnectionListenerDelegate, OS_nw_listener, OS_nw_browser;

@interface WFRemoteWidgetConnection : NSObject

@property (nonatomic, getter=isConnectedToDevice) BOOL connectedToDevice;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) long long connectionType;
@property (retain, nonatomic) NSObject<OS_xpc_object> *unrepliedWakeEvent;
@property (retain, nonatomic) NSObject<OS_nw_browser> *nwBrowser;
@property (retain, nonatomic) NSObject<OS_nw_listener> *nwListener;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *dataToSend;
@property (weak, nonatomic) id<WFRemoteWidgetConnectionListenerDelegate> listenerDelegate;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) id /* block */ connectionTimeoutHandler;

+ (id)_createFramer;
+ (id)connectionToDevice:(id)a0;
+ (id)connectionToDevice:(id)a0 connectionType:(long long)a1;
+ (id)startListeningForIncomingConfigurations;
+ (id)startListeningForIncomingConfigurationsWithConnectionType:(long long)a0;

- (id)initWithDeviceIdentifier:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)_handleNewConnection:(id)a0;
- (id)init;
- (void)_tearDownConnection;
- (void).cxx_destruct;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_browserDiscoveredDeviceEndpoint:(id)a0;
- (id)_createAdvertiseParameters;
- (id)_createBrowseParameters;
- (void)_receiveRequestOnConnection;
- (void)_receiveResponseOnConnection;
- (void)_replyToWakeEvent:(id)a0;
- (void)_sendPendingData;
- (void)_setupWakeHandler;
- (id)initWithConnectionType:(long long)a0;
- (id)initWithConnectionType:(long long)a0 DeviceIdentifier:(id)a1;
- (void)sendRemoteConfigurationRequest:(id)a0 completion:(id /* block */)a1;
- (id)setupAdvertiseConnectionType:(long long)a0;
- (id)setupBrowseConnectionType:(long long)a0 deviceIdentifier:(id)a1;

@end
