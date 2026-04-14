@class VCPProtoBounds, NSString, VCPProtoTimeRange, NSMutableArray;

@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *classifications;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (retain, nonatomic) NSString *faceId;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)a0;

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
- (void)addClassification:(id)a0;
- (id)exportToLegacyDictionary;
- (void)clearClassifications;
- (unsigned long long)classificationsCount;
- (id)classificationAtIndex:(unsigned long long)a0;

@end
