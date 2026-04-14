@class NSMutableArray;

@interface PPTPBCadence : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cadences;

+ (Class)cadencesType;

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
- (void)clearCadences;
- (void)addCadences:(id)a0;
- (unsigned long long)cadencesCount;
- (id)cadencesAtIndex:(unsigned long long)a0;

@end
