@class NSMutableArray;

@interface PPSPBCadence : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cadences;

+ (Class)cadencesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCadences:(id)a0;
- (id)cadencesAtIndex:(unsigned long long)a0;
- (unsigned long long)cadencesCount;
- (void)clearCadences;

@end
