@class NSString, NSDictionary, NSURL;

@interface RMStoreUnresolvedAsset : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *extensionToken;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) long long resolveAs;
@property (readonly, copy, nonatomic) NSDictionary *queryParameters;
@property (readonly, copy, nonatomic) NSURL *downloadURL;
@property (readonly, nonatomic) char useCache;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addExtensionToken:(id)a0;
- (id)initWithAsset:(id)a0 queryParameters:(id)a1;
- (id)initWithAsset:(id)a0 queryParameters:(id)a1 downloadURL:(id)a2;
- (id)initWithAsset:(id)a0 queryParameters:(id)a1 downloadURL:(id)a2 useCache:(char)a3;
- (id)initWithAsset:(id)a0 queryParameters:(id)a1 useCache:(char)a2;
- (id)initWithAssetIdentifier:(id)a0 queryParameters:(id)a1 downloadURL:(id)a2 useCache:(char)a3;
- (id)initWithAssetIdentifier:(id)a0 queryParameters:(id)a1 useCache:(char)a2;
- (id)initWithAssetIdentifier:(id)a0 resolveAs:(long long)a1 queryParameters:(id)a2 downloadURL:(id)a3 extensionToken:(id)a4 useCache:(char)a5;
- (char)isEqualToUnresolvedAsset:(id)a0;

@end
