@class NSString, FLOWSchemaFLOWStateReason, NSData;

@interface FLOWSchemaFLOWState : SISchemaInstrumentationMessage {
    struct { unsigned char flowStateType : 1; } _has;
}

@property (copy, nonatomic) NSString *currentTaskName;
@property (nonatomic) char hasCurrentTaskName;
@property (copy, nonatomic) NSString *currentTaskType;
@property (nonatomic) char hasCurrentTaskType;
@property (nonatomic) int flowStateType;
@property (nonatomic) char hasFlowStateType;
@property (retain, nonatomic) FLOWSchemaFLOWStateReason *flowStateReason;
@property (nonatomic) char hasFlowStateReason;
@property (copy, nonatomic) NSString *resolvedSlotName;
@property (nonatomic) char hasResolvedSlotName;
@property (copy, nonatomic) NSString *flowStateReasonDescription;
@property (nonatomic) char hasFlowStateReasonDescription;
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
- (void)deleteCurrentTaskName;
- (void)deleteCurrentTaskType;
- (void)deleteFlowStateReason;
- (void)deleteFlowStateReasonDescription;
- (void)deleteFlowStateType;
- (void)deleteResolvedSlotName;
- (id)suppressMessageUnderConditions;

@end
