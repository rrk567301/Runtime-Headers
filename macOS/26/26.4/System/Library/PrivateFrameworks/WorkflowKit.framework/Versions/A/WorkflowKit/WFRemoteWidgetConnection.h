@class NSString, NSMutableArray, NSObject;
@protocol OS_nw_browser, OS_nw_connection, OS_dispatch_queue;

@interface WFRemoteWidgetConnection : NSObject

@property (nonatomic) long long connectionType;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSObject<OS_nw_browser> *nwBrowser;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSMutableArray *dataToSend;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isConnectedToDevice) BOOL connectedToDevice;
@property (nonatomic) BOOL invalidated;
@property (copy, nonatomic) id /* block */ connectionTimeoutHandler;

+ (id)connectionToDevice:(id)a0;
+ (id)connectionToDevice:(id)a0 connectionType:(long long)a1;

- (void)_tearDownConnection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)dealloc;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_browserDiscoveredDeviceEndpoint:(id)a0;
- (void)_receiveResponseOnConnection;
- (void)_sendPendingData;
- (id)initWithConnectionType:(long long)a0 deviceIdentifier:(id)a1;
- (void)sendRemoteConfigurationRequest:(id)a0 completion:(id /* block */)a1;
- (id)setupBrowseConnectionType:(long long)a0 deviceIdentifier:(id)a1;

@end
