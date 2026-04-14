@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (void).cxx_destruct;
- (int)processIdentifier;
- (id)bundleIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (id)localizedName;
- (BOOL)isConnected;
- (id)initWithClient:(id)a0;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUseBluetoothAccessories;

@end
