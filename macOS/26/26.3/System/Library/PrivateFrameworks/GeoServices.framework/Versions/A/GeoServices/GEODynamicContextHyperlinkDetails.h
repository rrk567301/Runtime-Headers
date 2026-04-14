@class NSString, PBUnknownFields;

@interface GEODynamicContextHyperlinkDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_displayedString;
    int _layoutType;
    struct { unsigned char has_layoutType : 1; } _flags;
}

@property (nonatomic) BOOL hasLayoutType;
@property (nonatomic) int layoutType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsLayoutType:(id)a0;
- (id)layoutTypeAsString:(int)a0;

@end
