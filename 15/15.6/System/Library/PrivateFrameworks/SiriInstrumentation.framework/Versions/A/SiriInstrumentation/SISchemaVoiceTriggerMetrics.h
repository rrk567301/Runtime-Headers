@class NSArray, MHSchemaMHVoiceTriggerFirstPassDailyMetadata, NSData;

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char implicitUtterances : 1; unsigned char explicitUtterances : 1; unsigned char firstPassTriggers : 1; unsigned char isJSEnabled : 1; } _has;
}

@property (nonatomic) int implicitUtterances;
@property (nonatomic) char hasImplicitUtterances;
@property (nonatomic) int explicitUtterances;
@property (nonatomic) char hasExplicitUtterances;
@property (nonatomic) int firstPassTriggers;
@property (nonatomic) char hasFirstPassTriggers;
@property (copy, nonatomic) NSArray *firstPassStatistics;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerFirstPassDailyMetadata *firstPassMetadata;
@property (nonatomic) char hasFirstPassMetadata;
@property (nonatomic) char isJSEnabled;
@property (nonatomic) char hasIsJSEnabled;
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
- (void)addFirstPassStatistics:(id)a0;
- (void)clearFirstPassStatistics;
- (void)deleteExplicitUtterances;
- (void)deleteFirstPassMetadata;
- (void)deleteFirstPassStatistics;
- (void)deleteFirstPassTriggers;
- (void)deleteImplicitUtterances;
- (void)deleteIsJSEnabled;
- (id)firstPassStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)firstPassStatisticsCount;
- (id)suppressMessageUnderConditions;

@end
