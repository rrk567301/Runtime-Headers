@class FLOWSchemaFLOWHomeAutomationRequestMetadata, NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationRequest : SISchemaInstrumentationMessage {
    struct { unsigned char homeAutomationRequestType : 1; unsigned char homeAutomationRequestOutcome : 1; unsigned char homeAutomationRequestDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *homeAutomationRequestId;
@property (nonatomic) char hasHomeAutomationRequestId;
@property (nonatomic) int homeAutomationRequestType;
@property (nonatomic) char hasHomeAutomationRequestType;
@property (nonatomic) int homeAutomationRequestOutcome;
@property (nonatomic) char hasHomeAutomationRequestOutcome;
@property (copy, nonatomic) NSArray *homeAutomationRequestErrorReasons;
@property (nonatomic) unsigned int homeAutomationRequestDuration;
@property (nonatomic) char hasHomeAutomationRequestDuration;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata;
@property (nonatomic) char hasHomeAutomationRequestMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHomeAutomationRequestType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addHomeAutomationRequestErrorReason:(id)a0;
- (void)clearHomeAutomationRequestErrorReason;
- (void)deleteHomeAutomationRequestDuration;
- (void)deleteHomeAutomationRequestErrorReason;
- (void)deleteHomeAutomationRequestId;
- (void)deleteHomeAutomationRequestMetadata;
- (void)deleteHomeAutomationRequestOutcome;
- (id)homeAutomationRequestErrorReasonAtIndex:(unsigned long long)a0;
- (unsigned long long)homeAutomationRequestErrorReasonCount;
- (id)suppressMessageUnderConditions;

@end
