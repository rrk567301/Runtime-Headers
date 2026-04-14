@class NSString, NSData;

@interface NLXSchemaCDMMultilingualVariant : SISchemaInstrumentationMessage {
    struct { unsigned char languageVariantConfidenceScore : 1; } _has;
}

@property (copy, nonatomic) NSString *languageVariantName;
@property (nonatomic) BOOL hasLanguageVariantName;
@property (nonatomic) double languageVariantConfidenceScore;
@property (nonatomic) BOOL hasLanguageVariantConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteLanguageVariantConfidenceScore;
- (void)deleteLanguageVariantName;

@end
