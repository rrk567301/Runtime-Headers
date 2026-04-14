@class NSString, NSMutableArray;

@interface ADClientSettingsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;
@property (retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams;

+ (id)options;
+ (Class)currentSettingParamsType;
+ (Class)currentSearchLandingAdsSettingParamsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addCurrentSettingParams:(id)a0;
- (void)addCurrentSearchLandingAdsSettingParams:(id)a0;
- (unsigned long long)currentSettingParamsCount;
- (void)clearCurrentSettingParams;
- (id)currentSettingParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;
- (void)clearCurrentSearchLandingAdsSettingParams;
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)a0;

@end
