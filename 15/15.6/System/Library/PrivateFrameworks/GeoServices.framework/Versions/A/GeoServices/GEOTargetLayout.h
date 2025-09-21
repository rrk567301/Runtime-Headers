@class PBUnknownFields;

@interface GEOTargetLayout : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    struct { unsigned char has_layoutInfo : 1; unsigned char has_layoutStyle : 1; unsigned char has_uiTarget : 1; } _flags;
}

@property (nonatomic) char hasUiTarget;
@property (nonatomic) int uiTarget;
@property (nonatomic) char hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (nonatomic) char hasLayoutStyle;
@property (nonatomic) int layoutStyle;
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
- (int)StringAsLayoutInfo:(id)a0;
- (int)StringAsLayoutStyle:(id)a0;
- (int)StringAsUiTarget:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)layoutInfoAsString:(int)a0;
- (id)layoutStyleAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)uiTargetAsString:(int)a0;

@end
