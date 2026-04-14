@class PBDataReader, GEOPDLinkedPlace, NSMutableArray, PBUnknownFields;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_childPlaces;
    unsigned long long _featureId;
    GEOPDLinkedPlace *_parentPlace;
    NSMutableArray *_siblingPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_featureId : 1; unsigned char read_unknownFields : 1; unsigned char read_childPlaces : 1; unsigned char read_parentPlace : 1; unsigned char read_siblingPlaces : 1; unsigned char wrote_anyField : 1; } _flags;
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
