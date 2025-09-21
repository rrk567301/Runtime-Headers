@interface AWDWifiP2PAirplayHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char binEnd : 1; unsigned char binStart : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) BOOL hasBinStart;
@property (nonatomic) int binStart;
@property (nonatomic) BOOL hasBinEnd;
@property (nonatomic) int binEnd;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
