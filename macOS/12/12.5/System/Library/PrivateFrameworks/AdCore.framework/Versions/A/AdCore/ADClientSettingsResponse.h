@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams;
@property (retain, nonatomic) NSMutableArray *searchLandingAdsSettingsParams;
@property (retain, nonatomic) NSMutableArray *settings;

+ (Class)searchAdsSettingsParamsType;
+ (Class)searchLandingAdsSettingsParamsType;
+ (Class)settingsType;

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
- (void)addSearchAdsSettingsParams:(id)a0;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (void)addSettings:(id)a0;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)clearSearchAdsSettingsParams;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (void)clearSearchLandingAdsSettingsParams;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)settingsCount;
- (void)clearSettings;
- (id)settingsAtIndex:(unsigned long long)a0;

@end
