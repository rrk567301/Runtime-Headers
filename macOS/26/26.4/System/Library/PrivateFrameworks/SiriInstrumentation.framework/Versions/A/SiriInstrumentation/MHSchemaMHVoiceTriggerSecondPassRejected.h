@class NSData, MHSchemaMHVoiceTriggerEventInfo;

@interface MHSchemaMHVoiceTriggerSecondPassRejected : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo;
@property (nonatomic) BOOL hasVoiceTriggerEventInfo;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVoiceTriggerEventInfo;

@end
