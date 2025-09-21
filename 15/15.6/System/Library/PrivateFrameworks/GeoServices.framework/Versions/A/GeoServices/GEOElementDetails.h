@class PBUnknownFields;

@interface GEOElementDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _businessId;
    unsigned int _elementIndex;
    int _elementType;
    unsigned int _localSearchProviderId;
    char _isEnrichedResult;
    struct { unsigned char has_businessId : 1; unsigned char has_elementIndex : 1; unsigned char has_elementType : 1; unsigned char has_localSearchProviderId : 1; unsigned char has_isEnrichedResult : 1; } _flags;
}

@property (nonatomic) char hasElementType;
@property (nonatomic) int elementType;
@property (nonatomic) char hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) char hasLocalSearchProviderId;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) char hasElementIndex;
@property (nonatomic) unsigned int elementIndex;
@property (nonatomic) char hasIsEnrichedResult;
@property (nonatomic) char isEnrichedResult;
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
- (int)StringAsElementType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)elementTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
