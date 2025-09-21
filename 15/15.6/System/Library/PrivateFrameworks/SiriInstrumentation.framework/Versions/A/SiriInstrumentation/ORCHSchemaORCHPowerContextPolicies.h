@class NSData;

@interface ORCHSchemaORCHPowerContextPolicies : SISchemaInstrumentationMessage {
    struct { unsigned char asrAssistantPolicy : 1; unsigned char asrDictationPolicy : 1; unsigned char ttsPolicy : 1; } _has;
}

@property (nonatomic) int asrAssistantPolicy;
@property (nonatomic) char hasAsrAssistantPolicy;
@property (nonatomic) int asrDictationPolicy;
@property (nonatomic) char hasAsrDictationPolicy;
@property (nonatomic) int ttsPolicy;
@property (nonatomic) char hasTtsPolicy;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTtsPolicy;
- (void)deleteAsrAssistantPolicy;
- (void)deleteAsrDictationPolicy;
- (id)suppressMessageUnderConditions;

@end
