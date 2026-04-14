@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoMovieMovingObjectResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *bounds;

+ (Class)boundsType;
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
- (void)addBounds:(id)a0;
- (id)boundsAtIndex:(unsigned long long)a0;
- (unsigned long long)boundsCount;
- (void)clearBounds;
- (id)exportToLegacyDictionary;

@end
