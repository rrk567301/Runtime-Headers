@class NSString;

@interface GEORPButton : PBCodable <NSCopying> {
    NSString *_localizedText;
    int _buttonAction;
    struct { unsigned char has_buttonAction : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (nonatomic) BOOL hasButtonAction;
@property (nonatomic) int buttonAction;

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
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsButtonAction:(id)a0;
- (id)buttonActionAsString:(int)a0;

@end
