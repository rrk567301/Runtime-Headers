@class VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float confidence;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) int flags;

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
- (id)exportToLegacyDictionary;

@end
