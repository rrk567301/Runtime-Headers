@class NSMutableArray;

@interface HDCodableMedicationDosageList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addItems:(id)a0;
- (unsigned long long)itemsCount;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
