@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)bundleURL;
- (id)initWithClient:(id)a0;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (BOOL)isPermittedToUsePublicAPI;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isConnected;
- (id)localizedName;
- (id)vendorProtocolDelegate;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end
