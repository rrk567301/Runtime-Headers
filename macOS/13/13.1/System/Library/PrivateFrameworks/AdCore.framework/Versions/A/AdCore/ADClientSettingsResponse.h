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
- (void)clearSearchAdsSettingsParams;
- (void)addSearchAdsSettingsParams:(id)a0;
- (unsigned long long)searchAdsSettingsParamsCount;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void)clearSearchLandingAdsSettingsParams;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;

@end
