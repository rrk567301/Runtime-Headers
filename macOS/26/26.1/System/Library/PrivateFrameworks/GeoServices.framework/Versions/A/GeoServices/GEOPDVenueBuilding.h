@class PBUnknownFields, GEOPDVenueLabel, PBDataReader;

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _directoryGroupingIds;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _levelIds;
    unsigned long long _buildingId;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_buildingId : 1; unsigned char has_muid : 1; unsigned char read_unknownFields : 1; unsigned char read_directoryGroupingIds : 1; unsigned char read_levelIds : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
