@class GEOPDMIFAutocompleteEntryClient, GEOPDMIFAutocompleteEntryServer, PBDataReader;

@interface GEOPDMIFAutocompleteEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDMIFAutocompleteEntryClient *_clientEntry;
    GEOPDMIFAutocompleteEntryServer *_serverEntry;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _rankedScore;
    int _type;
    struct { unsigned char has_rankedScore : 1; unsigned char has_type : 1; unsigned char read_clientEntry : 1; unsigned char read_serverEntry : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;

@end
