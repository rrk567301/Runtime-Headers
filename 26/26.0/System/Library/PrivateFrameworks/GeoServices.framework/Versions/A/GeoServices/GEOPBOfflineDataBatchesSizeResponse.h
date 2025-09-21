@interface GEOPBOfflineDataBatchesSizeResponse : PBCodable <NSCopying> {
    unsigned long long _compressedSizeBytes;
    unsigned long long _sizeBytes;
    unsigned int _batchCount;
    struct { unsigned char has_compressedSizeBytes : 1; unsigned char has_sizeBytes : 1; unsigned char has_batchCount : 1; } _flags;
}

@property (nonatomic) BOOL hasBatchCount;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) BOOL hasSizeBytes;
@property (nonatomic) unsigned long long sizeBytes;
@property (nonatomic) BOOL hasCompressedSizeBytes;
@property (nonatomic) unsigned long long compressedSizeBytes;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end
