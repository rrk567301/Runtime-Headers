@class NSString, NSMutableArray;

@interface ADClientSettingsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;
@property (retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams;

+ (id)options;
+ (Class)currentSettingParamsType;
+ (Class)currentSearchLandingAdsSettingParamsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCurrentSettingParams;
- (void)addCurrentSettingParams:(id)a0;
- (unsigned long long)currentSettingParamsCount;
- (id)currentSettingParamsAtIndex:(unsigned long long)a0;
- (void)clearCurrentSearchLandingAdsSettingParams;
- (void)addCurrentSearchLandingAdsSettingParams:(id)a0;
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)a0;

@end
