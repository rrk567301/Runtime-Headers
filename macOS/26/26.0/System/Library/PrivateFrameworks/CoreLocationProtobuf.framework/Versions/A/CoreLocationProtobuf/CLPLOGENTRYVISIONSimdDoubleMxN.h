@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addColumns:(id)a0;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)clearColumns;
- (unsigned long long)columnsCount;

@end
