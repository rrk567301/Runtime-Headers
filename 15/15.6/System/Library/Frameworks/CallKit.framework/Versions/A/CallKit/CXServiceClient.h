@class NSString, NSURL, BSServiceConnection;
@protocol BSServiceConnectionHost, CXServiceClientDelegate;

@interface CXServiceClient : NSObject

@property (readonly, nonatomic) long long backgroundModeOptions;
@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (weak, nonatomic) id<CXServiceClientDelegate> delegate;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic, getter=isConnected) char connected;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) char permittedToUseBluetoothAccessories;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) char permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) char permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (char)clientCanAccessSandboxFileURL:(id)a0;

@end
