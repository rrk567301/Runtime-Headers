@class NSString, NSData;

@interface NLXSchemaCDMMultilingualVariant : SISchemaInstrumentationMessage {
    struct { unsigned char languageVariantConfidenceScore : 1; } _has;
}

@property (copy, nonatomic) NSString *languageVariantName;
@property (nonatomic) char hasLanguageVariantName;
@property (nonatomic) double languageVariantConfidenceScore;
@property (nonatomic) char hasLanguageVariantConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLanguageVariantConfidenceScore;
- (void)deleteLanguageVariantName;
- (id)suppressMessageUnderConditions;

@end
