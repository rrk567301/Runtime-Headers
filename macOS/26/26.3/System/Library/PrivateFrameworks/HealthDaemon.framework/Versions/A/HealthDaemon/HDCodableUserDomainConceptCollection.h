@class NSMutableArray;

@interface HDCodableUserDomainConceptCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *concepts;

+ (Class)conceptsType;

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
- (void)addConcepts:(id)a0;
- (void)clearConcepts;
- (id)conceptsAtIndex:(unsigned long long)a0;
- (unsigned long long)conceptsCount;

@end
