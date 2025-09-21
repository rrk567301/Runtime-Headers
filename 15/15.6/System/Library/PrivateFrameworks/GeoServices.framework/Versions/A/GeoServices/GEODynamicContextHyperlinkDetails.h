@class NSString, PBUnknownFields;

@interface GEODynamicContextHyperlinkDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_displayedString;
    int _layoutType;
    struct { unsigned char has_layoutType : 1; } _flags;
}

@property (nonatomic) char hasLayoutType;
@property (nonatomic) int layoutType;
@property (readonly, nonatomic) char hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;
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
- (int)StringAsLayoutType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)layoutTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
