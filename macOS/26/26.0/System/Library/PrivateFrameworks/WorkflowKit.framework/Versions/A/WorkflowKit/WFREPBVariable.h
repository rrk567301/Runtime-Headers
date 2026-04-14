@class NSString, NSMutableArray;

@interface WFREPBVariable : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addItems:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)itemsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearItems;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
