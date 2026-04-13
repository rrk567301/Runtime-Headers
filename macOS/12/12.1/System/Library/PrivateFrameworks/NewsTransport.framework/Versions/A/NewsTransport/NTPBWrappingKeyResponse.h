@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addWrappingKeyMapEntries:(id)a0;
- (void)clearWrappingKeyMapEntries;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)a0;

@end
