@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)bundleURL;
- (id)localizedName;
- (BOOL)isConnected;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)initWithClient:(id)a0;
- (id)vendorProtocolDelegate;

@end
