@class NSString;

@interface GEOHyperlinkMetaData : PBCodable <NSCopying> {
    NSString *_displayedString;
    int _hyperlinkType;
    struct { unsigned char has_hyperlinkType : 1; } _flags;
}

@property (nonatomic) char hasHyperlinkType;
@property (nonatomic) int hyperlinkType;
@property (readonly, nonatomic) char hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

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
- (int)StringAsHyperlinkType:(id)a0;
- (id)hyperlinkTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
