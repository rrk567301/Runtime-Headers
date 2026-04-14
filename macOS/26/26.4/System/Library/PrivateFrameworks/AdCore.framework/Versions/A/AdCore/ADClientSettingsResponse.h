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

- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (void)clearSearchAdsSettingsParams;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void)addSearchAdsSettingsParams:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearSearchLandingAdsSettingsParams;
- (void)writeTo:(id)a0;
- (unsigned long long)searchAdsSettingsParamsCount;

@end
