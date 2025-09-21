@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUserSegmentationApiModThreshold;
@property (retain, nonatomic) NSString *userSegmentationApiModThreshold;
@property (readonly, nonatomic) char hasUserSegmentationApiModMax;
@property (retain, nonatomic) NSString *userSegmentationApiModMax;
@property (readonly, nonatomic) char hasUserSegmentationRefreshRate;
@property (retain, nonatomic) NSString *userSegmentationRefreshRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
