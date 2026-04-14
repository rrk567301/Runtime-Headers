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

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsArElementShown:(id)a0;
- (id)arElementShownAsString:(int)a0;

@end
