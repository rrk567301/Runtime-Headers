@class GEOPDAutocompleteOriginationRoutePlanningParameters, PBUnknownFields;

@interface GEOPDAutocompleteOriginationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteOriginationRoutePlanningParameters *_routePlanningParameters;
    int _autocompleteOriginationType;
    int _clientSoftwarePlatform;
    struct { unsigned char has_autocompleteOriginationType : 1; unsigned char has_clientSoftwarePlatform : 1; } _flags;
}

@property (nonatomic) char hasAutocompleteOriginationType;
@property (nonatomic) int autocompleteOriginationType;
@property (readonly, nonatomic) char hasRoutePlanningParameters;
@property (retain, nonatomic) GEOPDAutocompleteOriginationRoutePlanningParameters *routePlanningParameters;
@property (nonatomic) char hasClientSoftwarePlatform;
@property (nonatomic) int clientSoftwarePlatform;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsClientSoftwarePlatform:(id)a0;
- (int)StringAsAutocompleteOriginationType:(id)a0;
- (id)clientSoftwarePlatformAsString:(int)a0;
- (id)autocompleteOriginationTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
