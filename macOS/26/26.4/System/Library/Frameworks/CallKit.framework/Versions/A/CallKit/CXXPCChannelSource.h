@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)initWithClient:(id)a0;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isConnected;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)localizedName;

@end
