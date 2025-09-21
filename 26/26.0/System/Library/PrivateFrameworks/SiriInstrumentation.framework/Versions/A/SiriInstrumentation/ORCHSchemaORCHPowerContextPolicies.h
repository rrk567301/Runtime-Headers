@class NSData;

@interface ORCHSchemaORCHPowerContextPolicies : SISchemaInstrumentationMessage {
    struct { unsigned char asrAssistantPolicy : 1; unsigned char asrDictationPolicy : 1; unsigned char ttsPolicy : 1; } _has;
}

@property (nonatomic) int asrAssistantPolicy;
@property (nonatomic) BOOL hasAsrAssistantPolicy;
@property (nonatomic) int asrDictationPolicy;
@property (nonatomic) BOOL hasAsrDictationPolicy;
@property (nonatomic) int ttsPolicy;
@property (nonatomic) BOOL hasTtsPolicy;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteTtsPolicy;
- (void)deleteAsrAssistantPolicy;
- (void)deleteAsrDictationPolicy;

@end
