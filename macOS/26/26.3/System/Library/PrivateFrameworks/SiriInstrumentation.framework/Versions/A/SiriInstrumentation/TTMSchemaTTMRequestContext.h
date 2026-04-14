@class TTMSchemaTTMRequestEnded, TTMSchemaTTMRequestFailed, NSData, TTMSchemaTTMRequestStarted;

@interface TTMSchemaTTMRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) TTMSchemaTTMRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) TTMSchemaTTMRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) TTMSchemaTTMRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
