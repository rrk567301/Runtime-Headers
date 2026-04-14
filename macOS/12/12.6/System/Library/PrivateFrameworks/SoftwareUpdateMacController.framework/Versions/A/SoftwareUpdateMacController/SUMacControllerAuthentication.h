@interface SUMacControllerAuthentication : NSObject

+ (id)authorizationHeaderForAssetType:(id)a0 overrides:(id)a1;
+ (id)authorizationHeaderForAsset:(id)a0 overrides:(id)a1;
+ (id)appleConnectSSOToken;
+ (id)authorizationHeaderForURL:(id)a0 overrides:(id)a1;
+ (id)_hostnameForAssetType:(id)a0;
+ (id)_serviceIDForHostname:(id)a0;
+ (id)_appIDForHostname:(id)a0;
+ (id)authorizationHeaderFetchingDAWTokenForServiceID:(id)a0 appID:(id)a1;
+ (id)_fallbackWestgateToken;

@end
