@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)localizedName;
- (int)processIdentifier;
- (id)initWithClient:(id)a0;
- (char)isConnected;
- (char)isPermittedToUseBluetoothAccessories;
- (char)isPermittedToUsePrivateAPI;
- (char)isPermittedToUsePublicAPI;
- (id)vendorProtocolDelegate;

@end
