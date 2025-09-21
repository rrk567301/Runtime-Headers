@class NSData;

@interface PLUSSchemaPLUSInferencePluginStartedOrChanged : SISchemaInstrumentationMessage {
    struct { unsigned char triggerReason : 1; } _has;
}

@property (nonatomic) int triggerReason;
@property (nonatomic) char hasTriggerReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTriggerReason;
- (id)suppressMessageUnderConditions;

@end
