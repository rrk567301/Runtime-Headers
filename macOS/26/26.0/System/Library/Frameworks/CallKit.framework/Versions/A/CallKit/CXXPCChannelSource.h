@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)initWithClient:(id)a0;
- (id)vendorProtocolDelegate;
- (id)bundleIdentifier;
- (id)bundleURL;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isConnected;
- (int)processIdentifier;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (BOOL)isPermittedToUsePublicAPI;
- (struct { unsigned int x0[8]; })auditToken;
- (id)localizedName;
- (void).cxx_destruct;

@end
