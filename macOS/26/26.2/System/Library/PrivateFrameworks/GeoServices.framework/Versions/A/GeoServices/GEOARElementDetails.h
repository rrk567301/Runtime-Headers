@class PBUnknownFields;

@interface GEOARElementDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _arElementShown;
    BOOL _didSafetyUiTraggier;
    BOOL _didUserSeeArLabel;
    struct { unsigned char has_arElementShown : 1; unsigned char has_didSafetyUiTraggier : 1; unsigned char has_didUserSeeArLabel : 1; } _flags;
}

@property (nonatomic) BOOL hasArElementShown;
@property (nonatomic) int arElementShown;
@property (nonatomic) BOOL hasDidUserSeeArLabel;
@property (nonatomic) BOOL didUserSeeArLabel;
@property (nonatomic) BOOL hasDidSafetyUiTraggier;
@property (nonatomic) BOOL didSafetyUiTraggier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsArElementShown:(id)a0;
- (id)arElementShownAsString:(int)a0;

@end
