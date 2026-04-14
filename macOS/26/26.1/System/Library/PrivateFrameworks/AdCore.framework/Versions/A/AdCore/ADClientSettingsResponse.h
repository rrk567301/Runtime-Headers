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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addSearchAdsSettingsParams:(id)a0;
- (void)clearSearchLandingAdsSettingsParams;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (id)description;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)clearSearchAdsSettingsParams;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
