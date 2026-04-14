@class NSMutableArray;

@interface CLPLOGENTRYVISIONVLMatrixfMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rows;

+ (Class)rowsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRows:(id)a0;
- (unsigned long long)rowsCount;
- (void)clearRows;
- (id)rowsAtIndex:(unsigned long long)a0;

@end
