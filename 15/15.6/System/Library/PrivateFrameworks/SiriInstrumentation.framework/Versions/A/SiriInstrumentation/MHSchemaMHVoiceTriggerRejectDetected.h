@class NSArray, NSData;

@interface MHSchemaMHVoiceTriggerRejectDetected : SISchemaInstrumentationMessage {
    struct { unsigned char phsRejectBeforeActivationCount : 1; unsigned char checkerHSRejectBeforeActivationCount : 1; unsigned char checkerJSRejectBeforeActivationCount : 1; unsigned char phsThreshold : 1; unsigned char pjsThreshold : 1; unsigned char checkerHSThreshold : 1; unsigned char checkerJSThreshold : 1; } _has;
}

@property (nonatomic) unsigned int phsRejectBeforeActivationCount;
@property (nonatomic) char hasPhsRejectBeforeActivationCount;
@property (nonatomic) unsigned int checkerHSRejectBeforeActivationCount;
@property (nonatomic) char hasCheckerHSRejectBeforeActivationCount;
@property (nonatomic) unsigned int checkerJSRejectBeforeActivationCount;
@property (nonatomic) char hasCheckerJSRejectBeforeActivationCount;
@property (copy, nonatomic) NSArray *phsRejectBeforeActivationScores;
@property (copy, nonatomic) NSArray *checkerHSRejectBeforeActivationScores;
@property (copy, nonatomic) NSArray *checkerJSRejectBeforeActivationScores;
@property (copy, nonatomic) NSArray *phsRejectBeforeActivationTimeDiffInNs;
@property (copy, nonatomic) NSArray *checkerHSRejectBeforeActivationTimeDiffInNs;
@property (copy, nonatomic) NSArray *checkerJSRejectBeforeActivationTimeDiffInNs;
@property (nonatomic) float phsThreshold;
@property (nonatomic) char hasPhsThreshold;
@property (nonatomic) float pjsThreshold;
@property (nonatomic) char hasPjsThreshold;
@property (nonatomic) float checkerHSThreshold;
@property (nonatomic) char hasCheckerHSThreshold;
@property (nonatomic) float checkerJSThreshold;
@property (nonatomic) char hasCheckerJSThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCheckerHSRejectBeforeActivationScores:(float)a0;
- (void)addCheckerHSRejectBeforeActivationTimeDiffInNs:(unsigned long long)a0;
- (void)addCheckerJSRejectBeforeActivationScores:(float)a0;
- (void)addCheckerJSRejectBeforeActivationTimeDiffInNs:(unsigned long long)a0;
- (void)addPhsRejectBeforeActivationScores:(float)a0;
- (void)addPhsRejectBeforeActivationTimeDiffInNs:(unsigned long long)a0;
- (float)checkerHSRejectBeforeActivationScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)checkerHSRejectBeforeActivationScoresCount;
- (unsigned long long)checkerHSRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)a0;
- (unsigned long long)checkerHSRejectBeforeActivationTimeDiffInNsCount;
- (float)checkerJSRejectBeforeActivationScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)checkerJSRejectBeforeActivationScoresCount;
- (unsigned long long)checkerJSRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)a0;
- (unsigned long long)checkerJSRejectBeforeActivationTimeDiffInNsCount;
- (void)clearCheckerHSRejectBeforeActivationScores;
- (void)clearCheckerHSRejectBeforeActivationTimeDiffInNs;
- (void)clearCheckerJSRejectBeforeActivationScores;
- (void)clearCheckerJSRejectBeforeActivationTimeDiffInNs;
- (void)clearPhsRejectBeforeActivationScores;
- (void)clearPhsRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerHSRejectBeforeActivationCount;
- (void)deleteCheckerHSRejectBeforeActivationScores;
- (void)deleteCheckerHSRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerHSThreshold;
- (void)deleteCheckerJSRejectBeforeActivationCount;
- (void)deleteCheckerJSRejectBeforeActivationScores;
- (void)deleteCheckerJSRejectBeforeActivationTimeDiffInNs;
- (void)deleteCheckerJSThreshold;
- (void)deletePhsRejectBeforeActivationCount;
- (void)deletePhsRejectBeforeActivationScores;
- (void)deletePhsRejectBeforeActivationTimeDiffInNs;
- (void)deletePhsThreshold;
- (void)deletePjsThreshold;
- (float)phsRejectBeforeActivationScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)phsRejectBeforeActivationScoresCount;
- (unsigned long long)phsRejectBeforeActivationTimeDiffInNsAtIndex:(unsigned long long)a0;
- (unsigned long long)phsRejectBeforeActivationTimeDiffInNsCount;
- (id)suppressMessageUnderConditions;

@end
