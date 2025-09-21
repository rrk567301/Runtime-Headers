@class NSMutableArray;

@interface CLPLOGENTRYVISIONVLMatrixfMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rows;

+ (Class)rowsType;

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
- (void)addRows:(id)a0;
- (unsigned long long)rowsCount;
- (void)clearRows;
- (id)rowsAtIndex:(unsigned long long)a0;

@end
