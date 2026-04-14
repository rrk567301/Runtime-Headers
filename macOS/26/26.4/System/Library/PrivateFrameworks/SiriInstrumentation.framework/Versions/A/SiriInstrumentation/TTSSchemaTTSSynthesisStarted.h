@class SISchemaFreeFormText, NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSynthesisStarted : SISchemaInstrumentationMessage {
    struct { unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; unsigned char thermalState : 1; unsigned char thermalLevel : 1; } _has;
}

@property (nonatomic) int synthesisSource;
@property (nonatomic) BOOL hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) BOOL hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) BOOL hasSynthesisEffect;
@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (nonatomic) int thermalLevel;
@property (nonatomic) BOOL hasThermalLevel;
@property (retain, nonatomic) SISchemaFreeFormText *textToSpeak;
@property (nonatomic) BOOL hasTextToSpeak;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteTextToSpeak;
- (void)deleteThermalLevel;
- (void)deleteThermalState;
- (void)deleteVoiceContext;

@end
