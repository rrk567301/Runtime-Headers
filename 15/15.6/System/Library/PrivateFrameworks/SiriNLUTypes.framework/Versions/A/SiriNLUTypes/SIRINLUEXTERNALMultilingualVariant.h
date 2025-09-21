@class NSString;

@interface SIRINLUEXTERNALMultilingualVariant : PBCodable <NSCopying> {
    struct { unsigned char languageVariantScore : 1; } _has;
}

@property (readonly, nonatomic) char hasLanguageVariantName;
@property (retain, nonatomic) NSString *languageVariantName;
@property (nonatomic) char hasLanguageVariantScore;
@property (nonatomic) double languageVariantScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
