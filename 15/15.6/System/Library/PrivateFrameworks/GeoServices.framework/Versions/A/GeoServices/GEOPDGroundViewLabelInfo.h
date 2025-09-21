@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _endHeading;
    NSString *_localityName;
    NSString *_locationName;
    NSString *_secondaryLocationName;
    double _startHeading;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_endHeading : 1; unsigned char has_startHeading : 1; unsigned char read_unknownFields : 1; unsigned char read_localityName : 1; unsigned char read_locationName : 1; unsigned char read_secondaryLocationName : 1; unsigned char wrote_anyField : 1; } _flags;
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
