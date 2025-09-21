@class PBUnknownFields;

@interface GEORPPersonalizedMapsContext : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _addressType;
    int _placeType;
    struct { unsigned char has_addressType : 1; unsigned char has_placeType : 1; } _flags;
}

@property (nonatomic) char hasAddressType;
@property (nonatomic) int addressType;
@property (nonatomic) char hasPlaceType;
@property (nonatomic) int placeType;
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
- (int)StringAsAddressType:(id)a0;
- (int)StringAsPlaceType:(id)a0;
- (id)addressTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
