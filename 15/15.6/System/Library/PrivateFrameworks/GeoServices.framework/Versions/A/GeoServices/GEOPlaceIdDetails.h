@class PBUnknownFields;

@interface GEOPlaceIdDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _basemapId;
    unsigned long long _businessId;
    unsigned int _localSearchProviderId;
    unsigned int _resultIndex;
    struct { unsigned char has_basemapId : 1; unsigned char has_businessId : 1; unsigned char has_localSearchProviderId : 1; unsigned char has_resultIndex : 1; } _flags;
}

@property (nonatomic) char hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) char hasBasemapId;
@property (nonatomic) unsigned long long basemapId;
@property (nonatomic) char hasLocalSearchProviderId;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) char hasResultIndex;
@property (nonatomic) unsigned int resultIndex;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
