@class NSString, NSDictionary;

@interface SecureMobileAssetBundle : NSObject {
    NSString *_assetBundlePath;
}

@property (readonly, nonatomic) NSString *assetBundlePath;
@property (readonly, nonatomic) BOOL isSecureMobileAsset;
@property (readonly, nonatomic) BOOL isPersonalized;
@property (readonly, nonatomic) BOOL isGloballySigned;
@property (readonly, nonatomic) BOOL isAccessible;
@property (readonly, nonatomic) NSString *accessPath;
@property (readonly, nonatomic) NSDictionary *secureInfoPlist;

+ (BOOL)assetIsSecureMobileAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)beginAccess:(long long)a0 error:(id *)a1;
- (id)cryptexPath;
- (BOOL)depersonalize:(id *)a0;
- (BOOL)endAccess:(long long)a0 error:(id *)a1;
- (BOOL)graft:(id *)a0;
- (id)graftPath;
- (unsigned int)graftdmgType;
- (BOOL)isGrafted;
- (BOOL)isGraftedPath:(id)a0;
- (BOOL)personalize:(id)a0 error:(id *)a1;
- (id)rootHashPath;
- (id)secureAssetDataPath;
- (id)ticketPath;
- (id)trustCachePath;
- (BOOL)ungraft:(id *)a0;

@end
