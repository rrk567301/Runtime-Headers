@class NSString;

@interface GEOHyperlinkMetaData : PBCodable <NSCopying> {
    NSString *_displayedString;
    int _hyperlinkType;
    struct { unsigned char has_hyperlinkType : 1; } _flags;
}

@property (nonatomic) BOOL hasHyperlinkType;
@property (nonatomic) int hyperlinkType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

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
- (int)StringAsHyperlinkType:(id)a0;
- (id)hyperlinkTypeAsString:(int)a0;

@end
