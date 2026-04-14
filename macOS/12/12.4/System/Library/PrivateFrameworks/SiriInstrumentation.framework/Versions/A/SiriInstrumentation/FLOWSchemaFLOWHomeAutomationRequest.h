@class FLOWSchemaFLOWHomeAutomationRequestMetadata, NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationRequest : SISchemaInstrumentationMessage {
    struct { unsigned char homeAutomationRequestType : 1; unsigned char homeAutomationRequestOutcome : 1; unsigned char homeAutomationRequestDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *homeAutomationRequestId;
@property (nonatomic) BOOL hasHomeAutomationRequestId;
@property (nonatomic) int homeAutomationRequestType;
@property (nonatomic) BOOL hasHomeAutomationRequestType;
@property (nonatomic) int homeAutomationRequestOutcome;
@property (nonatomic) BOOL hasHomeAutomationRequestOutcome;
@property (copy, nonatomic) NSArray *homeAutomationRequestErrorReasons;
@property (nonatomic) unsigned int homeAutomationRequestDuration;
@property (nonatomic) BOOL hasHomeAutomationRequestDuration;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata;
@property (nonatomic) BOOL hasHomeAutomationRequestMetadata;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearHomeAutomationRequestErrorReason;
- (void)addHomeAutomationRequestErrorReason:(id)a0;
- (void)deleteHomeAutomationRequestId;
- (void)deleteHomeAutomationRequestType;
- (void)deleteHomeAutomationRequestOutcome;
- (void)deleteHomeAutomationRequestErrorReason;
- (unsigned long long)homeAutomationRequestErrorReasonCount;
- (id)homeAutomationRequestErrorReasonAtIndex:(unsigned long long)a0;
- (void)deleteHomeAutomationRequestDuration;
- (void)deleteHomeAutomationRequestMetadata;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
