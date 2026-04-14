@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoMovieMovingObjectResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *bounds;

+ (id)resultFromLegacyDictionary:(id)a0;
+ (Class)boundsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)exportToLegacyDictionary;
- (void)addBounds:(id)a0;
- (unsigned long long)boundsCount;
- (void)clearBounds;
- (id)boundsAtIndex:(unsigned long long)a0;

@end
