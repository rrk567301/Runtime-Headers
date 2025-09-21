@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predicates;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearPredicates;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)a0;
- (id)predicatesAtIndex:(unsigned long long)a0;

@end
