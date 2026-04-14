@class ORCHSchemaORCHCDMRequestStarted, ORCHSchemaORCHCDMRequestEnded, NSData, SISchemaUUID, ORCHSchemaORCHCDMRequestFailed;

@interface ORCHSchemaORCHCDMBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHCDMRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHCDMRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHCDMRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
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
- (void)deleteSubRequestId;
- (void)deleteTrpId;

@end
