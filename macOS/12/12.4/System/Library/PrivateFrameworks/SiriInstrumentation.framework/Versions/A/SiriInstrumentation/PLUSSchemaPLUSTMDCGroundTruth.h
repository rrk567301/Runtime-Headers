@class NSString, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSTMDCGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char phonemesToPhonemesDistance : 1; unsigned char isTTSMispronounced : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGroundTruthId;
- (void)deleteAsrRawRecognitionLinkId;
- (void)deleteAsrPostItnLinkId;
- (void)deleteTtsCurrentPhonemes;
- (void)deletePhonemesToPhonemesDistance;
- (void)deleteIsTTSMispronounced;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
