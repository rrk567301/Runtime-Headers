@class SIRINLUEXTERNALParser, NSMutableArray;

@interface SIRINLUEXTERNALLanguageVariantResult : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *multilingualVariants;
@property (readonly, nonatomic) char hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;

+ (Class)multilingualVariantType;

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
- (void)clearMultilingualVariants;
- (unsigned long long)multilingualVariantsCount;
- (void)addMultilingualVariant:(id)a0;
- (id)multilingualVariantAtIndex:(unsigned long long)a0;

@end
