@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntentTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *intentArgs;
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
- (void)clearIntentArgs;
- (unsigned long long)intentArgsCount;
- (void)addIntentArgs:(id)a0;
- (void)deleteIntentArgs;
- (void)deleteLinkId;
- (id)intentArgsAtIndex:(unsigned long long)a0;

@end
