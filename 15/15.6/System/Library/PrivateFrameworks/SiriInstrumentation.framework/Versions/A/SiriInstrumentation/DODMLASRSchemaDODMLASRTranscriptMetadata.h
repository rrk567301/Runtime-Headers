@class NSData;

@interface DODMLASRSchemaDODMLASRTranscriptMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char numDocumentsRejected : 1; unsigned char numSentencesRejected : 1; unsigned char numDocumentsAccepted : 1; unsigned char numSentencesAccepted : 1; unsigned char numTokensAccepted : 1; unsigned char numTokensOutOfVocabularyAccepted : 1; unsigned char numDocumentsDictated : 1; unsigned char numDocumentsTyped : 1; unsigned char numTokensDictated : 1; unsigned char numTokensTyped : 1; unsigned char numSentencesMungeRejected : 1; unsigned char numSentencesMungeChanged : 1; unsigned char numTokensEstimatedRejected : 1; unsigned char numTokensEstimatedExamined : 1; } _has;
}

@property (nonatomic) unsigned int numDocumentsRejected;
@property (nonatomic) char hasNumDocumentsRejected;
@property (nonatomic) unsigned int numSentencesRejected;
@property (nonatomic) char hasNumSentencesRejected;
@property (nonatomic) unsigned int numDocumentsAccepted;
@property (nonatomic) char hasNumDocumentsAccepted;
@property (nonatomic) unsigned int numSentencesAccepted;
@property (nonatomic) char hasNumSentencesAccepted;
@property (nonatomic) unsigned int numTokensAccepted;
@property (nonatomic) char hasNumTokensAccepted;
@property (nonatomic) unsigned int numTokensOutOfVocabularyAccepted;
@property (nonatomic) char hasNumTokensOutOfVocabularyAccepted;
@property (nonatomic) unsigned int numDocumentsDictated;
@property (nonatomic) char hasNumDocumentsDictated;
@property (nonatomic) unsigned int numDocumentsTyped;
@property (nonatomic) char hasNumDocumentsTyped;
@property (nonatomic) unsigned int numTokensDictated;
@property (nonatomic) char hasNumTokensDictated;
@property (nonatomic) unsigned int numTokensTyped;
@property (nonatomic) char hasNumTokensTyped;
@property (nonatomic) unsigned int numSentencesMungeRejected;
@property (nonatomic) char hasNumSentencesMungeRejected;
@property (nonatomic) unsigned int numSentencesMungeChanged;
@property (nonatomic) char hasNumSentencesMungeChanged;
@property (nonatomic) unsigned int numTokensEstimatedRejected;
@property (nonatomic) char hasNumTokensEstimatedRejected;
@property (nonatomic) unsigned int numTokensEstimatedExamined;
@property (nonatomic) char hasNumTokensEstimatedExamined;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumSentencesMungeRejected;
- (void)deleteNumDocumentsAccepted;
- (void)deleteNumDocumentsDictated;
- (void)deleteNumDocumentsRejected;
- (void)deleteNumDocumentsTyped;
- (void)deleteNumSentencesAccepted;
- (void)deleteNumSentencesMungeChanged;
- (void)deleteNumSentencesRejected;
- (void)deleteNumTokensAccepted;
- (void)deleteNumTokensDictated;
- (void)deleteNumTokensEstimatedExamined;
- (void)deleteNumTokensEstimatedRejected;
- (void)deleteNumTokensOutOfVocabularyAccepted;
- (void)deleteNumTokensTyped;
- (id)suppressMessageUnderConditions;

@end
