@interface AWDWiFiMetricsScanObj : PBCodable <NSCopying> {
    struct { unsigned char durScans : 1; unsigned char numScans : 1; unsigned char scanType : 1; } _has;
}

@property (nonatomic) char hasScanType;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) char hasNumScans;
@property (nonatomic) unsigned int numScans;
@property (nonatomic) char hasDurScans;
@property (nonatomic) unsigned int durScans;

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
