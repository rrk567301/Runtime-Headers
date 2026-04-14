@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)bundleURL;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)initWithClient:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUsePrivateAPI;
- (int)processIdentifier;
- (BOOL)isConnected;
- (id)localizedName;
- (id)vendorProtocolDelegate;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePublicAPI;

@end
