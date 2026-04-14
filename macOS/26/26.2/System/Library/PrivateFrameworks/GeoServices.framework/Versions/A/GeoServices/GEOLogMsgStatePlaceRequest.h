@class GEOPDPlaceRequest, PBUnknownFields;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    struct { unsigned char has_placeRequestType : 1; } _flags;
}

@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) BOOL hasPlaceDataRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeDataRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsPlaceRequestType:(id)a0;
- (id)placeRequestTypeAsString:(int)a0;
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
