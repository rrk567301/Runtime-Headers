@class NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSynthesisStarted : SISchemaInstrumentationMessage {
    struct { unsigned char synthesisSource : 1; unsigned char synthesisEffect : 1; unsigned char thermalState : 1; } _has;
}

@property (nonatomic) int synthesisSource;
@property (nonatomic) char hasSynthesisSource;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext;
@property (nonatomic) char hasVoiceContext;
@property (nonatomic) int synthesisEffect;
@property (nonatomic) char hasSynthesisEffect;
@property (nonatomic) int thermalState;
@property (nonatomic) char hasThermalState;
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
- (void)deleteSynthesisEffect;
- (void)deleteSynthesisSource;
- (void)deleteThermalState;
- (void)deleteVoiceContext;
- (id)suppressMessageUnderConditions;

@end
