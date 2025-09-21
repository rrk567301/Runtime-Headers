@class NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
    struct { unsigned char commandType : 1; unsigned char commandOutcome : 1; unsigned char commandErrorReason : 1; unsigned char commandDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *commandId;
@property (nonatomic) char hasCommandId;
@property (nonatomic) int commandType;
@property (nonatomic) char hasCommandType;
@property (nonatomic) int commandOutcome;
@property (nonatomic) char hasCommandOutcome;
@property (nonatomic) int commandErrorReason;
@property (nonatomic) char hasCommandErrorReason;
@property (nonatomic) unsigned int commandDuration;
@property (nonatomic) char hasCommandDuration;
@property (copy, nonatomic) NSArray *homeAutomationRequests;
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
- (void)deleteCommandId;
- (void)addHomeAutomationRequests:(id)a0;
- (void)clearHomeAutomationRequests;
- (void)deleteCommandDuration;
- (void)deleteCommandErrorReason;
- (void)deleteCommandOutcome;
- (void)deleteCommandType;
- (void)deleteHomeAutomationRequests;
- (id)homeAutomationRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeAutomationRequestsCount;
- (id)suppressMessageUnderConditions;

@end
