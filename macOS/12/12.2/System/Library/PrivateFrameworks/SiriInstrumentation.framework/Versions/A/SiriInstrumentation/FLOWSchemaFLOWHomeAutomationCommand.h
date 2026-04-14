@class NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
    struct { unsigned char commandType : 1; unsigned char commandOutcome : 1; unsigned char commandErrorReason : 1; unsigned char commandDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *commandId;
@property (nonatomic) BOOL hasCommandId;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) int commandOutcome;
@property (nonatomic) BOOL hasCommandOutcome;
@property (nonatomic) int commandErrorReason;
@property (nonatomic) BOOL hasCommandErrorReason;
@property (nonatomic) unsigned int commandDuration;
@property (nonatomic) BOOL hasCommandDuration;
@property (copy, nonatomic) NSArray *homeAutomationRequests;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addHomeAutomationRequests:(id)a0;
- (void)clearHomeAutomationRequests;
- (unsigned long long)homeAutomationRequestsCount;
- (id)homeAutomationRequestsAtIndex:(unsigned long long)a0;

@end
