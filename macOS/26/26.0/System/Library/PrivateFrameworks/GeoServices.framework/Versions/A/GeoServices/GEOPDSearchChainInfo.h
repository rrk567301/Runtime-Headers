@class GEOPDSearchBrandDensity, NSString, PBDataReader;

@interface GEOPDSearchChainInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _relationshipTypes;
    GEOPDSearchBrandDensity *_brandDensity;
    NSString *_brandDisplayName;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_relationshipTypes : 1; unsigned char read_brandDensity : 1; unsigned char read_brandDisplayName : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (void)dealloc;
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
