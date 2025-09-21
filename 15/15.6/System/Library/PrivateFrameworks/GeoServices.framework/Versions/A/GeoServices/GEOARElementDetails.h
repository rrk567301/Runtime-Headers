@class PBUnknownFields;

@interface GEOARElementDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _arElementShown;
    char _didSafetyUiTraggier;
    char _didUserSeeArLabel;
    struct { unsigned char has_arElementShown : 1; unsigned char has_didSafetyUiTraggier : 1; unsigned char has_didUserSeeArLabel : 1; } _flags;
}

@property (nonatomic) char hasArElementShown;
@property (nonatomic) int arElementShown;
@property (nonatomic) char hasDidUserSeeArLabel;
@property (nonatomic) char didUserSeeArLabel;
@property (nonatomic) char hasDidSafetyUiTraggier;
@property (nonatomic) char didSafetyUiTraggier;
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
- (int)StringAsArElementShown:(id)a0;
- (id)arElementShownAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
