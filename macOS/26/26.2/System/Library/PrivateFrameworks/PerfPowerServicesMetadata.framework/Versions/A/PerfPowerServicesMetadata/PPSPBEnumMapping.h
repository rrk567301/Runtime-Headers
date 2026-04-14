@class NSMutableArray;

@interface PPSPBEnumMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *enumMaps;

+ (Class)enumMapType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)enumMapAtIndex:(unsigned long long)a0;
- (void)addEnumMap:(id)a0;
- (void)clearEnumMaps;
- (unsigned long long)enumMapsCount;

@end
