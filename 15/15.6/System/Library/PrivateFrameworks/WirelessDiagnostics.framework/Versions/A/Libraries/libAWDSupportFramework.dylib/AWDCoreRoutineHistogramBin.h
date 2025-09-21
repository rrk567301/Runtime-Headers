@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
