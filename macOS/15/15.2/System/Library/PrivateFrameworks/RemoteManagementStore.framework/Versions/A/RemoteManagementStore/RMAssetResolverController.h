@interface RMAssetResolverController : NSObject <RMAssetResolverControllerProtocol>

+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveDataAsset:(id)a0 assetIdentifier:(id)a1 downloadURL:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_resolveKeychainAssets:(id)a0 assetIdentifiers:(id)a1 accessGroup:(id)a2 persistentRefs:(id)a3 completionHandler:(id /* block */)a4;
+ (void)extractUserIdentityAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 subscriberIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveKeychainAssets:(id)a0 assetIdentifiers:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveKeychainPasswordAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveUserNameAndPasswordAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
