@class NSData;

@interface ODDSiriSchemaODDAttentionInvocationCounts : SISchemaInstrumentationMessage {
    struct { unsigned char phsRejectBeforeActivationCount : 1; unsigned char checkerRejectBeforeActivationCount : 1; unsigned char checkerNearMissBeforeAcceptCount : 1; unsigned char falseWakeWithNoTriggerPhraseCount : 1; unsigned char falseWakeWithSpeechNoMatchCount : 1; unsigned char falseWakeWithTTMMitigationCount : 1; unsigned char ncAcceptPostNcMitigationCount : 1; unsigned char spkidAcceptPostSpkidMitigationCount : 1; unsigned char ttmAcceptPostTtmMitigationCount : 1; } _has;
}

@property (nonatomic) unsigned int phsRejectBeforeActivationCount;
@property (nonatomic) BOOL hasPhsRejectBeforeActivationCount;
@property (nonatomic) unsigned int checkerRejectBeforeActivationCount;
@property (nonatomic) BOOL hasCheckerRejectBeforeActivationCount;
@property (nonatomic) unsigned int checkerNearMissBeforeAcceptCount;
@property (nonatomic) BOOL hasCheckerNearMissBeforeAcceptCount;
@property (nonatomic) unsigned int falseWakeWithNoTriggerPhraseCount;
@property (nonatomic) BOOL hasFalseWakeWithNoTriggerPhraseCount;
@property (nonatomic) unsigned int falseWakeWithSpeechNoMatchCount;
@property (nonatomic) BOOL hasFalseWakeWithSpeechNoMatchCount;
@property (nonatomic) unsigned int falseWakeWithTTMMitigationCount;
@property (nonatomic) BOOL hasFalseWakeWithTTMMitigationCount;
@property (nonatomic) unsigned int ncAcceptPostNcMitigationCount;
@property (nonatomic) BOOL hasNcAcceptPostNcMitigationCount;
@property (nonatomic) unsigned int spkidAcceptPostSpkidMitigationCount;
@property (nonatomic) BOOL hasSpkidAcceptPostSpkidMitigationCount;
@property (nonatomic) unsigned int ttmAcceptPostTtmMitigationCount;
@property (nonatomic) BOOL hasTtmAcceptPostTtmMitigationCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteCheckerNearMissBeforeAcceptCount;
- (void)deleteCheckerRejectBeforeActivationCount;
- (void)deleteFalseWakeWithNoTriggerPhraseCount;
- (void)deleteFalseWakeWithSpeechNoMatchCount;
- (void)deleteFalseWakeWithTTMMitigationCount;
- (void)deleteNcAcceptPostNcMitigationCount;
- (void)deletePhsRejectBeforeActivationCount;
- (void)deleteSpkidAcceptPostSpkidMitigationCount;
- (void)deleteTtmAcceptPostTtmMitigationCount;

@end
