@class NSString, PBUnknownFields;

@interface GEOGenericStringData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_tokenSubstitute;
    int _privacyFilterType;
    int _stringSubstituteType;
    struct { unsigned char has_privacyFilterType : 1; unsigned char has_stringSubstituteType : 1; } _flags;
}

@property (readonly, nonatomic) char hasTokenSubstitute;
@property (retain, nonatomic) NSString *tokenSubstitute;
@property (nonatomic) char hasStringSubstituteType;
@property (nonatomic) int stringSubstituteType;
@property (nonatomic) char hasPrivacyFilterType;
@property (nonatomic) int privacyFilterType;
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
- (int)StringAsPrivacyFilterType:(id)a0;
- (int)StringAsStringSubstituteType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)privacyFilterTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)stringSubstituteTypeAsString:(int)a0;

@end
