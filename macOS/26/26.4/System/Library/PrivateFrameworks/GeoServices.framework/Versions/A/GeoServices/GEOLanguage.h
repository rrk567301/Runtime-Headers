@class NSMutableArray, PBUnknownFields;

@interface GEOLanguage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_languages;
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *languages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)languageType;

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
- (void)addLanguage:(id)a0;
- (void)clearLanguages;
- (id)languageAtIndex:(unsigned long long)a0;
- (unsigned long long)languagesCount;

@end
