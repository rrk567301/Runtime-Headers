@class NSString, NSData;

@interface ATXPBHeroAppPrediction : PBCodable <NSCopying> {
    struct { unsigned char adamId : 1; unsigned char latitude : 1; unsigned char latitudeAtPredictionTime : 1; unsigned char longitude : 1; unsigned char longitudeAtPredictionTime : 1; unsigned char poiMuid : 1; unsigned char radius : 1; unsigned char rank : 1; unsigned char score : 1; unsigned char isTouristApp : 1; } _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasIsTouristApp;
@property (nonatomic) char isTouristApp;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) char hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) char hasClipMetadata;
@property (retain, nonatomic) NSData *clipMetadata;
@property (nonatomic) char hasAdamId;
@property (nonatomic) long long adamId;
@property (nonatomic) char hasRank;
@property (nonatomic) long long rank;
@property (nonatomic) char hasRadius;
@property (nonatomic) long long radius;
@property (nonatomic) char hasLatitudeAtPredictionTime;
@property (nonatomic) double latitudeAtPredictionTime;
@property (nonatomic) char hasLongitudeAtPredictionTime;
@property (nonatomic) double longitudeAtPredictionTime;
@property (readonly, nonatomic) char hasPoiCategory;
@property (retain, nonatomic) NSString *poiCategory;
@property (nonatomic) char hasPoiMuid;
@property (nonatomic) unsigned long long poiMuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
