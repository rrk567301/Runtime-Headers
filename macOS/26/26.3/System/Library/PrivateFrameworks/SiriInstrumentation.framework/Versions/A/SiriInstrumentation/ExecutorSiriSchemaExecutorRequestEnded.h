@class SISchemaIFOutcomeSuccess, NSData, SISchemaIFOutcomeToolDisambiguation;

@interface ExecutorSiriSchemaExecutorRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (retain, nonatomic) SISchemaIFOutcomeSuccess *success;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) SISchemaIFOutcomeToolDisambiguation *toolDisambiguation;
@property (nonatomic) BOOL hasToolDisambiguation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOutcomedetails;

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
- (void)deleteOutcome;
- (void)deleteSuccess;
- (void)deleteToolDisambiguation;

@end
