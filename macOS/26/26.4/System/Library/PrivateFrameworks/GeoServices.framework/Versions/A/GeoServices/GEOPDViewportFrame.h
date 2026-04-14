@class GEOPDGeographicCoordinate, PBDataReader, GEOPDBoundingCube, PBUnknownFields;

@interface GEOPDViewportFrame : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDGeographicCoordinate *_targetPoint;
    GEOPDBoundingCube *_viewTargetBounds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _distance;
    float _heading;
    float _pitch;
    struct { unsigned char has_distance : 1; unsigned char has_heading : 1; unsigned char has_pitch : 1; unsigned char read_unknownFields : 1; unsigned char read_targetPoint : 1; unsigned char read_viewTargetBounds : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
