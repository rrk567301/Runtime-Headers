@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *utterances;
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
- (void)clearUtterances;
- (unsigned long long)utterancesCount;
- (id)phrasesAtIndex:(unsigned long long)a0;
- (void)addPhrases:(id)a0;
- (void)addUtterances:(id)a0;
- (void)clearPhrases;
- (void)deleteLinkId;
- (void)deletePhrases;
- (void)deleteUtterances;
- (unsigned long long)phrasesCount;
- (id)utterancesAtIndex:(unsigned long long)a0;

@end
