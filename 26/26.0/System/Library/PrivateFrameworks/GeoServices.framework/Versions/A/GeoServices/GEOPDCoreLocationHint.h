@class PBDataReader, GEOPDMapsIdentifier, GEOLatLng, PBUnknownFields;

@interface GEOPDCoreLocationHint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _confidence;
    GEOLatLng *_location;
    GEOPDMapsIdentifier *_mapsIdentifier;
    double _visitEndTime;
    double _visitStartTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _hintSource;
    struct { unsigned char has_confidence : 1; unsigned char has_visitEndTime : 1; unsigned char has_visitStartTime : 1; unsigned char has_hintSource : 1; unsigned char read_unknownFields : 1; unsigned char read_location : 1; unsigned char read_mapsIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
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
