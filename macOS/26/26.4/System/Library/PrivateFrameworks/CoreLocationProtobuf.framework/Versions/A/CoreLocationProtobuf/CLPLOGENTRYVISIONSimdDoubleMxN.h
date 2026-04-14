@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addColumns:(id)a0;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)clearColumns;
- (unsigned long long)columnsCount;

@end
