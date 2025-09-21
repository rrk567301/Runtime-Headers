@class NSData;

@interface PLUSSchemaPLUSInferencePluginStartedOrChanged : SISchemaInstrumentationMessage {
    struct { unsigned char triggerReason : 1; } _has;
}

@property (nonatomic) int triggerReason;
@property (nonatomic) BOOL hasTriggerReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteTriggerReason;

@end
