@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *predicates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)clearPredicates;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)a0;
- (id)predicatesAtIndex:(unsigned long long)a0;

@end
