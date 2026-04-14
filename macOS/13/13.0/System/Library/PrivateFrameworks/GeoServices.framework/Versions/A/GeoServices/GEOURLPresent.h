@class GEOURLOptions, NSMutableArray, PBDataReader;

@interface GEOURLPresent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_items;
    GEOURLOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_items : 1; unsigned char read_options : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithDirectionsOptions:(id)a0;

@end
