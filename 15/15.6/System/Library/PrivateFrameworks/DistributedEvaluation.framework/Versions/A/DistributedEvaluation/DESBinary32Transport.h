@interface DESBinary32Transport : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _datas;
}

@property (readonly, nonatomic) unsigned long long datasCount;
@property (readonly, nonatomic) float *datas;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (float)dataAtIndex:(unsigned long long)a0;
- (void)addData:(float)a0;
- (void)setDatas:(float *)a0 count:(unsigned long long)a1;
- (void)clearDatas;

@end
