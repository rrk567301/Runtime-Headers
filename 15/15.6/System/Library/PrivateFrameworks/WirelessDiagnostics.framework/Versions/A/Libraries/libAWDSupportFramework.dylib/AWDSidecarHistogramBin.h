@interface AWDSidecarHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char binEnd : 1; unsigned char binStart : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasBinStart;
@property (nonatomic) double binStart;
@property (nonatomic) char hasBinEnd;
@property (nonatomic) double binEnd;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;

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
