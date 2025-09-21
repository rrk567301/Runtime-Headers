@interface SIRINLUINTERNALCompareOptions : PBCodable <NSCopying> {
    struct { unsigned char caseInsensitive : 1; unsigned char diacriticInsensitive : 1; unsigned char widthInsensitive : 1; } _has;
}

@property (nonatomic) char hasCaseInsensitive;
@property (nonatomic) char caseInsensitive;
@property (nonatomic) char hasDiacriticInsensitive;
@property (nonatomic) char diacriticInsensitive;
@property (nonatomic) char hasWidthInsensitive;
@property (nonatomic) char widthInsensitive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
