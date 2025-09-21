@class PBUnknownFields;

@interface GEORPUserFormDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _userFormStyle;
    struct { unsigned char has_userFormStyle : 1; } _flags;
}

@property (nonatomic) char hasUserFormStyle;
@property (nonatomic) int userFormStyle;
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
- (int)StringAsUserFormStyle:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)userFormStyleAsString:(int)a0;

@end
