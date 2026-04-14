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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsButtonAction:(id)a0;
- (id)buttonActionAsString:(int)a0;

@end
