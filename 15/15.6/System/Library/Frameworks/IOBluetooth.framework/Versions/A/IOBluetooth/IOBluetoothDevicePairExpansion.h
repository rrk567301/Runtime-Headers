@class CBCentralManager, NSXPCConnection, IOBluetoothL2CAPChannel, IOBluetoothHostController;

@interface IOBluetoothDevicePairExpansion : NSObject

@property unsigned short pageTimeout;
@property (retain) IOBluetoothHostController *hostController;
@property char supportsAuthentication;
@property char isNonSSPKeypressNotificationCapable;
@property (retain) IOBluetoothL2CAPChannel *channel;
@property char Q6BDAddrRange;
@property char isWiiRemote;
@property char isNeuroSwitch;
@property char isWiiUProController;
@property char isPolyVision;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) CBCentralManager *central;
@property char isStarted;

- (void).cxx_destruct;

@end
