@class PBDataReader, NSString, NSMutableArray, GEOPDSearchGeoDecoration;

@interface GEOPDSearchAddressLabeledToken : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchGeoDecoration *_abbrDecoration;
    NSMutableArray *_geoDecorations;
    NSString *_label;
    GEOPDSearchGeoDecoration *_streetRelaxationDecoration;
    NSString *_token;
    NSMutableArray *_unPaddedDoorNumbers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _labelType;
    struct { unsigned char read_abbrDecoration : 1; unsigned char read_geoDecorations : 1; unsigned char read_label : 1; unsigned char read_streetRelaxationDecoration : 1; unsigned char read_token : 1; unsigned char read_unPaddedDoorNumbers : 1; unsigned char wrote_anyField : 1; } _flags;
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
