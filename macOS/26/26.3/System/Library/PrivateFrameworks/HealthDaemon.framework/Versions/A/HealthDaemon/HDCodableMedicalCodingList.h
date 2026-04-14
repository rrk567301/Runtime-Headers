@class NSMutableArray;

@interface HDCodableMedicalCodingList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (id)dictionaryRepresentation;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addItems:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
