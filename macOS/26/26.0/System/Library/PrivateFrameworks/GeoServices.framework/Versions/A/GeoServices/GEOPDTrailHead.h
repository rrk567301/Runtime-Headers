@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDTrailHead : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    NSMutableArray *_trails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _hikingDisplayType;
    unsigned int _numInlineItems;
    struct { unsigned char has_hikingDisplayType : 1; unsigned char has_numInlineItems : 1; unsigned char read_unknownFields : 1; unsigned char read_mapsIds : 1; unsigned char read_trails : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)trailHeadWithPlaceData:(id)a0;

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
