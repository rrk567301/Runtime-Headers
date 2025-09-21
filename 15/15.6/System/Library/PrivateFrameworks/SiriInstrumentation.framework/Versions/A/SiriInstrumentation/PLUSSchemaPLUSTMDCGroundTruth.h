@class NSString, NSData, SISchemaUUID, PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1, PLUSSchemaPLUSTMDCCorrectedPronunciationTier1;

@interface PLUSSchemaPLUSTMDCGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char phonemesToPhonemesDistance : 1; unsigned char isTTSMispronounced : 1; unsigned char selfLogSource : 1; unsigned char isTmdcPluginEnabled : 1; unsigned char isCorrectionEligible : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) char hasGroundTruthId;
@property (retain, nonatomic) SISchemaUUID *asrRawRecognitionLinkId;
@property (nonatomic) char hasAsrRawRecognitionLinkId;
@property (retain, nonatomic) SISchemaUUID *asrPostItnLinkId;
@property (nonatomic) char hasAsrPostItnLinkId;
@property (copy, nonatomic) NSString *ttsCurrentPhonemes;
@property (nonatomic) char hasTtsCurrentPhonemes;
@property (nonatomic) double phonemesToPhonemesDistance;
@property (nonatomic) char hasPhonemesToPhonemesDistance;
@property (nonatomic) char isTTSMispronounced;
@property (nonatomic) char hasIsTTSMispronounced;
@property (copy, nonatomic) NSString *ttsSuggestedPhonemes;
@property (nonatomic) char hasTtsSuggestedPhonemes;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 *siriCurrentPronunciation;
@property (nonatomic) char hasSiriCurrentPronunciation;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 *correctedPronunciation;
@property (nonatomic) char hasCorrectedPronunciation;
@property (nonatomic) int selfLogSource;
@property (nonatomic) char hasSelfLogSource;
@property (nonatomic) char isTmdcPluginEnabled;
@property (nonatomic) char hasIsTmdcPluginEnabled;
@property (nonatomic) char isCorrectionEligible;
@property (nonatomic) char hasIsCorrectionEligible;
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
- (void)deleteAsrPostItnLinkId;
- (void)deleteAsrRawRecognitionLinkId;
- (void)deleteCorrectedPronunciation;
- (void)deleteGroundTruthId;
- (void)deleteIsCorrectionEligible;
- (void)deleteIsTTSMispronounced;
- (void)deleteIsTmdcPluginEnabled;
- (void)deletePhonemesToPhonemesDistance;
- (void)deleteSelfLogSource;
- (void)deleteSiriCurrentPronunciation;
- (void)deleteTtsCurrentPhonemes;
- (void)deleteTtsSuggestedPhonemes;
- (id)suppressMessageUnderConditions;

@end
