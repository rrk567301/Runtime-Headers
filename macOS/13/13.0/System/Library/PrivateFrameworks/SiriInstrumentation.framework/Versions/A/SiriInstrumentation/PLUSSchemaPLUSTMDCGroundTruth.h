@class NSString, NSData, SISchemaUUID, PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1, PLUSSchemaPLUSTMDCCorrectedPronunciationTier1;

@interface PLUSSchemaPLUSTMDCGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char phonemesToPhonemesDistance : 1; unsigned char isTTSMispronounced : 1; unsigned char selfLogSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) BOOL hasGroundTruthId;
@property (retain, nonatomic) SISchemaUUID *asrRawRecognitionLinkId;
@property (nonatomic) BOOL hasAsrRawRecognitionLinkId;
@property (retain, nonatomic) SISchemaUUID *asrPostItnLinkId;
@property (nonatomic) BOOL hasAsrPostItnLinkId;
@property (copy, nonatomic) NSString *ttsCurrentPhonemes;
@property (nonatomic) BOOL hasTtsCurrentPhonemes;
@property (nonatomic) double phonemesToPhonemesDistance;
@property (nonatomic) BOOL hasPhonemesToPhonemesDistance;
@property (nonatomic) BOOL isTTSMispronounced;
@property (nonatomic) BOOL hasIsTTSMispronounced;
@property (copy, nonatomic) NSString *ttsSuggestedPhonemes;
@property (nonatomic) BOOL hasTtsSuggestedPhonemes;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 *siriCurrentPronunciation;
@property (nonatomic) BOOL hasSiriCurrentPronunciation;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 *correctedPronunciation;
@property (nonatomic) BOOL hasCorrectedPronunciation;
@property (nonatomic) int selfLogSource;
@property (nonatomic) BOOL hasSelfLogSource;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteGroundTruthId;
- (void)deleteAsrRawRecognitionLinkId;
- (void)deleteAsrPostItnLinkId;
- (void)deleteTtsCurrentPhonemes;
- (void)deletePhonemesToPhonemesDistance;
- (void)deleteIsTTSMispronounced;
- (void)deleteTtsSuggestedPhonemes;
- (void)deleteSiriCurrentPronunciation;
- (void)deleteCorrectedPronunciation;
- (void)deleteSelfLogSource;

@end
