@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    struct { unsigned char has_requestType : 1; } _flags;
}

@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) char hasPlaceRequestParameters;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)requestTypeAsString:(int)a0;

@end
