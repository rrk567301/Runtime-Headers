@class NSString;

@interface SFEntitledAssetConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *regionId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (id)initWithAssetType:(unsigned long long)a0 language:(id)a1 regionId:(id)a2;
- (id)initWithAssetType:(unsigned long long)a0 locale:(id)a1 regionId:(id)a2;
- (id)initWithLanguage:(id)a0 task:(id)a1;
- (id)initWithLanguage:(id)a0 taskHint:(long long)a1;

@end
