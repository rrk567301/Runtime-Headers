@class NSString, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char topScoreForUtterance : 1; unsigned char startSampleCount : 1; unsigned char endSampleCount : 1; unsigned char hasSpeechDetected : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) char hasPageNumber;
@property (copy, nonatomic) NSString *phraseId;
@property (nonatomic) char hasPhraseId;
@property (nonatomic) float topScoreForUtterance;
@property (nonatomic) char hasTopScoreForUtterance;
@property (nonatomic) unsigned int startSampleCount;
@property (nonatomic) char hasStartSampleCount;
@property (nonatomic) unsigned int endSampleCount;
@property (nonatomic) char hasEndSampleCount;
@property (nonatomic) char hasSpeechDetected;
@property (nonatomic) char hasHasSpeechDetected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndSampleCount;
- (void)deleteHasSpeechDetected;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (void)deleteStartSampleCount;
- (void)deleteTopScoreForUtterance;
- (id)suppressMessageUnderConditions;

@end
