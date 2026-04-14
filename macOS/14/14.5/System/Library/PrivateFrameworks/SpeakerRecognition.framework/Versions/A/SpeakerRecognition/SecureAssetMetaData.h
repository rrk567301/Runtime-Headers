@class NSString, NSURL;

@interface SecureAssetMetaData : NSObject

@property (readonly, copy, nonatomic) NSString *configVersion;
@property (readonly, copy, nonatomic) NSURL *resourcePath;
@property (readonly, copy, nonatomic) NSURL *assetPathURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConfigVersion:(id)a0 resourcePath:(id)a1 assetPathURL:(id)a2;

@end
