@class NSArray, NSData;

@interface FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isReadingIntelligenceAttempteds;
@property (copy, nonatomic) NSArray *isReadingIntelligenceUseds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsReadingIntelligenceUsed;
- (void)addIsReadingIntelligenceAttempted:(char)a0;
- (void)addIsReadingIntelligenceUsed:(char)a0;
- (void)clearIsReadingIntelligenceAttempted;
- (void)clearIsReadingIntelligenceUsed;
- (void)deleteIsReadingIntelligenceAttempted;
- (char)isReadingIntelligenceAttemptedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceAttemptedCount;
- (char)isReadingIntelligenceUsedAtIndex:(unsigned long long)a0;
- (unsigned long long)isReadingIntelligenceUsedCount;
- (id)suppressMessageUnderConditions;

@end
