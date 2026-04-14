@class VCPProtoBounds, NSString, VCPProtoTimeRange, NSData, NSMutableArray;

@interface VCPProtoMovieHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (retain, nonatomic) NSMutableArray *classifications;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (retain, nonatomic) NSString *faceId;
@property (readonly, nonatomic) BOOL hasTorsoprint;
@property (retain, nonatomic) NSData *torsoprint;
@property (readonly, nonatomic) BOOL hasThumbnailID;
@property (retain, nonatomic) NSString *thumbnailID;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addClassification:(id)a0;
- (id)classificationAtIndex:(unsigned long long)a0;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (id)exportToLegacyDictionary;

@end
