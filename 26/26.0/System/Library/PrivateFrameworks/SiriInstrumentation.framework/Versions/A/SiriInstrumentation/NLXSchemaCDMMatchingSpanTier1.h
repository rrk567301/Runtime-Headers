@class NSString, NLXSchemaCDMInternalSpanDataTier1, NSData, SISchemaUUID;

@interface NLXSchemaCDMMatchingSpanTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) BOOL hasInput;
@property (retain, nonatomic) NLXSchemaCDMInternalSpanDataTier1 *internalSpanData;
@property (nonatomic) BOOL hasInternalSpanData;
@property (copy, nonatomic) NSString *semanticValue;
@property (nonatomic) BOOL hasSemanticValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteInput;
- (void)deleteInternalSpanData;
- (void)deleteLinkId;
- (void)deleteSemanticValue;

@end
