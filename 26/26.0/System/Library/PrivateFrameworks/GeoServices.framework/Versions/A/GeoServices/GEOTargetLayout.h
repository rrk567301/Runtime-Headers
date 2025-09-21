@class PBUnknownFields;

@interface GEOTargetLayout : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    struct { unsigned char has_layoutInfo : 1; unsigned char has_layoutStyle : 1; unsigned char has_uiTarget : 1; } _flags;
}

@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int uiTarget;
@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) int layoutStyle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (int)StringAsLayoutStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsLayoutInfo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (id)layoutInfoAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (id)layoutStyleAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsUiTarget:(id)a0;
- (id)uiTargetAsString:(int)a0;

@end
