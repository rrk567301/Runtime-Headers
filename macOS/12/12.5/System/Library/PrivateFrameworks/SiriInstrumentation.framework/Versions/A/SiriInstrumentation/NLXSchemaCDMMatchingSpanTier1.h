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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)deleteInternalSpanData;
- (void)deleteInput;
- (void)deleteSemanticValue;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
