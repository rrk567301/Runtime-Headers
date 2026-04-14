@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addEntries:(id)a0;
- (void)dealloc;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)clearEntries;
- (unsigned long long)entriesCount;

@end
