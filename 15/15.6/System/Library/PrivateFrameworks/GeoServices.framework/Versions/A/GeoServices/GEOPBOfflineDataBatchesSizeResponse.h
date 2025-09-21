@interface GEOPBOfflineDataBatchesSizeResponse : PBCodable <NSCopying> {
    unsigned long long _compressedSizeBytes;
    unsigned long long _sizeBytes;
    unsigned int _batchCount;
    struct { unsigned char has_compressedSizeBytes : 1; unsigned char has_sizeBytes : 1; unsigned char has_batchCount : 1; } _flags;
}

@property (nonatomic) char hasBatchCount;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) char hasSizeBytes;
@property (nonatomic) unsigned long long sizeBytes;
@property (nonatomic) char hasCompressedSizeBytes;
@property (nonatomic) unsigned long long compressedSizeBytes;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
