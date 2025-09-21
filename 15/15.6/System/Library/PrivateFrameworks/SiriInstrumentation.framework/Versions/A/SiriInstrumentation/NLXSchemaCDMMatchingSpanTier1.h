@class NSString, NLXSchemaCDMInternalSpanDataTier1, NSData, SISchemaUUID;

@interface NLXSchemaCDMMatchingSpanTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) char hasInput;
@property (retain, nonatomic) NLXSchemaCDMInternalSpanDataTier1 *internalSpanData;
@property (nonatomic) char hasInternalSpanData;
@property (copy, nonatomic) NSString *semanticValue;
@property (nonatomic) char hasSemanticValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteInput;
- (void)deleteInternalSpanData;
- (void)deleteLinkId;
- (void)deleteSemanticValue;
- (id)suppressMessageUnderConditions;

@end
