@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

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
- (void)addColumns:(id)a0;
- (void)clearColumns;
- (unsigned long long)columnsCount;
- (id)columnsAtIndex:(unsigned long long)a0;

@end
