@interface DESBinary32Transport : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _datas;
}

@property (readonly, nonatomic) unsigned long long datasCount;
@property (readonly, nonatomic) float *datas;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (float)dataAtIndex:(unsigned long long)a0;
- (void)addData:(float)a0;
- (void)setDatas:(float *)a0 count:(unsigned long long)a1;
- (void)clearDatas;

@end
