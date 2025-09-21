@class NSMutableArray, PBDataReader;

@interface GEOPDSearchACHintMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_addressEntrys;
    NSMutableArray *_brooklynEntrys;
    NSMutableArray *_businessEntrys;
    NSMutableArray *_features;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addressEntrys : 1; unsigned char read_brooklynEntrys : 1; unsigned char read_businessEntrys : 1; unsigned char read_features : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
