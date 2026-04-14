@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdFloatMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addColumns:(id)a0;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)clearColumns;
- (unsigned long long)columnsCount;

@end
