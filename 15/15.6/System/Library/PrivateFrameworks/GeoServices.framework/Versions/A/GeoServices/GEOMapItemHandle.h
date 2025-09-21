@class GEOPDPlaceRefinementParameters, GEOMapItemInitialRequestData, GEOMapItemClientAttributes, PBDataReader;

@interface GEOMapItemHandle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOMapItemInitialRequestData *_placeRequestData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _handleType;
    struct { unsigned char has_handleType : 1; unsigned char read_clientAttributes : 1; unsigned char read_placeRefinementParameters : 1; unsigned char read_placeRequestData : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasHandleType;
@property (nonatomic) int handleType;
@property (readonly, nonatomic) char hasPlaceRefinementParameters;
@property (retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (readonly, nonatomic) char hasPlaceRequestData;
@property (retain, nonatomic) GEOMapItemInitialRequestData *placeRequestData;
@property (readonly, nonatomic) char hasClientAttributes;
@property (retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;

+ (id)handleDataForMapItem:(id)a0;
+ (id)handleForMapItem:(id)a0;
+ (char)isValid:(id)a0;

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
- (int)StringAsHandleType:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)handleTypeAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
