@class PBDataReader, GEOPDMapsIdentifier, GEOLatLng, GEOPDBounds, PBUnknownFields;

@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _categorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_placeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_bounds : 1; unsigned char read_center : 1; unsigned char read_placeId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasPlaceId;
@property (retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property (readonly, nonatomic) char hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) unsigned long long categorysCount;
@property (readonly, nonatomic) int *categorys;
@property (readonly, nonatomic) char hasBounds;
@property (retain, nonatomic) GEOPDBounds *bounds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCategorys:(id)a0;
- (void)addCategory:(int)a0;
- (int)categoryAtIndex:(unsigned long long)a0;
- (id)categorysAsString:(int)a0;
- (void)clearCategorys;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setCategorys:(int *)a0 count:(unsigned long long)a1;

@end
