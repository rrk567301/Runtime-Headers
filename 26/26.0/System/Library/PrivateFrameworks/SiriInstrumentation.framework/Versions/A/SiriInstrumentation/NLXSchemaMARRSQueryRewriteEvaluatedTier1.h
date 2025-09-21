@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSQueryRewriteEvaluatedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *rewrittenUserUtterances;
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
- (id)rewrittenUserUtterancesAtIndex:(unsigned long long)a0;
- (void)addRewrittenUserUtterances:(id)a0;
- (void)clearRewrittenUserUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUserUtterances;
- (unsigned long long)rewrittenUserUtterancesCount;

@end
