@class GMSSchemaGMSModelRequestFailed, NSData, GMSSchemaGMSModelRequestEnded, GMSSchemaGMSModelRequestStarted;

@interface GMSSchemaGMSModelRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GMSSchemaGMSModelRequestStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) GMSSchemaGMSModelRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) GMSSchemaGMSModelRequestFailed *failed;
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
- (void)deleteStarted;

@end
