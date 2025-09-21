@class NSMutableArray;

@interface HDCodableUserDomainConceptCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *concepts;

+ (Class)conceptsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addConcepts:(id)a0;
- (void)clearConcepts;
- (id)conceptsAtIndex:(unsigned long long)a0;
- (unsigned long long)conceptsCount;

@end
