@class NSData, NSString, PBDataReader;

@interface GEOPBOfflineDataBatchReference : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _batchCompressedSizeBytes;
    NSData *_batchIdentifier;
    unsigned long long _batchSizeBytes;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_batchCompressedSizeBytes : 1; unsigned char has_batchSizeBytes : 1; unsigned char read_batchIdentifier : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
