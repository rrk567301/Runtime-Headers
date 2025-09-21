@class VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int position;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) char isCloseup;
@property (nonatomic) int faceID;
@property (readonly, nonatomic) char hasHumanBounds;
@property (retain, nonatomic) VCPProtoBounds *humanBounds;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
