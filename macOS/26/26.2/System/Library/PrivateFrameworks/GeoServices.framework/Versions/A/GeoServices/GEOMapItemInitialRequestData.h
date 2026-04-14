@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    struct { unsigned char has_requestType : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)requestTypeAsString:(int)a0;
- (int)StringAsRequestType:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;

@end
