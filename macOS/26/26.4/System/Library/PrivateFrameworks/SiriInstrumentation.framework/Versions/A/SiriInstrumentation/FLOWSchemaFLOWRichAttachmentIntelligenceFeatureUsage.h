@class NSArray, NSData;

@interface FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isReadingIntelligenceAttempteds;
@property (copy, nonatomic) NSArray *isReadingIntelligenceUseds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsReadingIntelligenceUsed;
- (void)addIsReadingIntelligenceAttempted:(BOOL)a0;
- (void)addIsReadingIntelligenceUsed:(BOOL)a0;
- (void)clearIsReadingIntelligenceAttempted;
- (void)clearIsReadingIntelligenceUsed;
- (void)deleteIsReadingIntelligenceAttempted;
- (BOOL)isReadingIntelligenceAttemptedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceAttemptedCount;
- (BOOL)isReadingIntelligenceUsedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceUsedCount;

@end
