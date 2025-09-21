@class NSString, TPSAssetFileInfoManager, TPSAssets;

@interface TPSAssetsConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager;
@property (copy, nonatomic) TPSAssets *assets;
@property (copy, nonatomic) NSString *language;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3;
- (id)cacheIdentifierForType:(long long)a0;
- (id)identifierForType:(long long)a0;

@end
