@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams;
@property (retain, nonatomic) NSMutableArray *searchLandingAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;
+ (Class)searchLandingAdsSettingsParamsType;

- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (void)clearSearchAdsSettingsParams;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (id)dictionaryRepresentation;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)addSearchAdsSettingsParams:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearSearchLandingAdsSettingsParams;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
