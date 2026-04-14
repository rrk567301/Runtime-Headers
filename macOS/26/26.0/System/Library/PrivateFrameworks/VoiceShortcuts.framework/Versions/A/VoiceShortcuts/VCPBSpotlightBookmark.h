@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <NSCopying>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

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
- (void)addPairs:(id)a0;
- (void)clearPairs;
- (id)pairsAtIndex:(unsigned long long)a0;
- (unsigned long long)pairsCount;

@end
