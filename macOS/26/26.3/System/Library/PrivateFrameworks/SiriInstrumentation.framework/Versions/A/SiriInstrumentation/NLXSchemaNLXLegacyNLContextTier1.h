@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaNLXLegacyNLContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *renderedTexts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRenderedTexts:(id)a0;
- (void)clearRenderedTexts;
- (void)deleteLinkId;
- (void)deleteRenderedTexts;
- (id)renderedTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)renderedTextsCount;

@end
