@class NSData;

@interface DODMLASRSchemaDODMLASRTranscriptMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char numDocumentsRejected : 1; unsigned char numSentencesRejected : 1; unsigned char numDocumentsAccepted : 1; unsigned char numSentencesAccepted : 1; unsigned char numTokensAccepted : 1; unsigned char numTokensOutOfVocabularyAccepted : 1; unsigned char numDocumentsDictated : 1; unsigned char numDocumentsTyped : 1; unsigned char numTokensDictated : 1; unsigned char numTokensTyped : 1; unsigned char numSentencesMungeRejected : 1; unsigned char numSentencesMungeChanged : 1; unsigned char numTokensEstimatedRejected : 1; unsigned char numTokensEstimatedExamined : 1; } _has;
}

@property (nonatomic) unsigned int numDocumentsRejected;
@property (nonatomic) BOOL hasNumDocumentsRejected;
@property (nonatomic) unsigned int numSentencesRejected;
@property (nonatomic) BOOL hasNumSentencesRejected;
@property (nonatomic) unsigned int numDocumentsAccepted;
@property (nonatomic) BOOL hasNumDocumentsAccepted;
@property (nonatomic) unsigned int numSentencesAccepted;
@property (nonatomic) BOOL hasNumSentencesAccepted;
@property (nonatomic) unsigned int numTokensAccepted;
@property (nonatomic) BOOL hasNumTokensAccepted;
@property (nonatomic) unsigned int numTokensOutOfVocabularyAccepted;
@property (nonatomic) BOOL hasNumTokensOutOfVocabularyAccepted;
@property (nonatomic) unsigned int numDocumentsDictated;
@property (nonatomic) BOOL hasNumDocumentsDictated;
@property (nonatomic) unsigned int numDocumentsTyped;
@property (nonatomic) BOOL hasNumDocumentsTyped;
@property (nonatomic) unsigned int numTokensDictated;
@property (nonatomic) BOOL hasNumTokensDictated;
@property (nonatomic) unsigned int numTokensTyped;
@property (nonatomic) BOOL hasNumTokensTyped;
@property (nonatomic) unsigned int numSentencesMungeRejected;
@property (nonatomic) BOOL hasNumSentencesMungeRejected;
@property (nonatomic) unsigned int numSentencesMungeChanged;
@property (nonatomic) BOOL hasNumSentencesMungeChanged;
@property (nonatomic) unsigned int numTokensEstimatedRejected;
@property (nonatomic) BOOL hasNumTokensEstimatedRejected;
@property (nonatomic) unsigned int numTokensEstimatedExamined;
@property (nonatomic) BOOL hasNumTokensEstimatedExamined;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteNumDocumentsRejected;
- (void)deleteNumSentencesRejected;
- (void)deleteNumDocumentsAccepted;
- (void)deleteNumSentencesAccepted;
- (void)deleteNumTokensAccepted;
- (void)deleteNumTokensOutOfVocabularyAccepted;
- (void)deleteNumDocumentsDictated;
- (void)deleteNumDocumentsTyped;
- (void)deleteNumTokensDictated;
- (void)deleteNumTokensTyped;
- (void)deleteNumSentencesMungeRejected;
- (void)deleteNumSentencesMungeChanged;
- (void)deleteNumTokensEstimatedRejected;
- (void)deleteNumTokensEstimatedExamined;

@end
