@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addWrappingKeyMapEntries:(id)a0;
- (void)clearWrappingKeyMapEntries;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)a0;
- (unsigned long long)wrappingKeyMapEntriesCount;

@end
