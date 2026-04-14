@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (void)addEntries:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)clearEntries;
- (unsigned long long)entriesCount;

@end
