@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_amenityV2s;
    NSMutableArray *_amenitys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_amenityV2s : 1; unsigned char read_amenitys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *amenitys;
@property (retain, nonatomic) NSMutableArray *amenityV2s;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)amentiesForPlaceData:(id)a0;
+ (id)stringBasedAmenityValuesForPlaceData:(id)a0;
+ (id)enumBasedAmenityValuesForPlaceData:(id)a0;
+ (Class)amenityType;
+ (Class)amenityV2Type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addAmenity:(id)a0;
- (void)addAmenityV2:(id)a0;
- (unsigned long long)amenitysCount;
- (void)clearAmenitys;
- (id)amenityAtIndex:(unsigned long long)a0;
- (unsigned long long)amenityV2sCount;
- (void)clearAmenityV2s;
- (id)amenityV2AtIndex:(unsigned long long)a0;

@end
