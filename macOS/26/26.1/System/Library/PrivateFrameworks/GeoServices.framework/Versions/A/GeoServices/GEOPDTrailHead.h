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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
