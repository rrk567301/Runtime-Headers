@class NSXPCConnection;

@interface MFAATokenManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;
+ (BOOL)isTokenValidForFeatures:(unsigned long long)a0 token:(id)a1;

- (void)requestActivationForToken:(id)a0 withUUID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_init;
- (void)confirmActivationForAuthToken:(id)a0 withUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestMetadataForToken:(id)a0 withUUID:(id)a1 requestedLocale:(id)a2 requestInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestActivationForAuthToken:(id)a0 withUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestMetadataForAuthToken:(id)a0 withUUID:(id)a1 requestedLocale:(id)a2 requestInfo:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (void)confirmActivationForToken:(id)a0 withUUID:(id)a1 completionHandler:(id /* block */)a2;

@end
