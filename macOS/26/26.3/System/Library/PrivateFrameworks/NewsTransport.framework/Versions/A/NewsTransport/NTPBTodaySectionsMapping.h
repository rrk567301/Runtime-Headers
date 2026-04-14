@class NSMutableArray;

@interface NTPBTodaySectionsMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;

+ (Class)identifiersType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (void)addIdentifiers:(id)a0;
- (id)identifiersAtIndex:(unsigned long long)a0;

@end
