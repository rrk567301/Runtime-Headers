@class NSString;

@interface GEORPButton : PBCodable <NSCopying> {
    NSString *_localizedText;
    int _buttonAction;
    struct { unsigned char has_buttonAction : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (nonatomic) char hasButtonAction;
@property (nonatomic) int buttonAction;

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
- (int)StringAsButtonAction:(id)a0;
- (id)buttonActionAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
