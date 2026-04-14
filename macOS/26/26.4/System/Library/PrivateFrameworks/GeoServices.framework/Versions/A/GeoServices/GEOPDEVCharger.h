@class PBDataReader, GEOPDAvailabilityInfo, NSMutableArray, PBUnknownFields;

@interface GEOPDEVCharger : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAvailabilityInfo *_aggregatedAvailabilityInfo;
    NSMutableArray *_plugs;
    unsigned long long _ttlSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_ttlSeconds : 1; unsigned char read_unknownFields : 1; unsigned char read_aggregatedAvailabilityInfo : 1; unsigned char read_plugs : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)evChargerFromPlaceData:(id)a0;

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
