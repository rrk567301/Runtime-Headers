@class IOBluetoothHostController, IOBluetoothL2CAPChannel, NSXPCConnection;

@interface IOBluetoothDevicePairExpansion : NSObject

@property unsigned short pageTimeout;
@property (retain) IOBluetoothHostController *hostController;
@property BOOL supportsAuthentication;
@property BOOL isNonSSPKeypressNotificationCapable;
@property (retain) IOBluetoothL2CAPChannel *channel;
@property BOOL Q6BDAddrRange;
@property BOOL isWiiRemote;
@property BOOL isNeuroSwitch;
@property BOOL isWiiUProController;
@property BOOL isPolyVision;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;

@end
