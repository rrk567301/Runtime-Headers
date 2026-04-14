@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *utterances;
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
- (void)deleteLinkId;
- (void)clearPhrases;
- (void)deletePhrases;
- (void)addPhrases:(id)a0;
- (unsigned long long)phrasesCount;
- (id)phrasesAtIndex:(unsigned long long)a0;
- (void)clearUtterances;
- (void)deleteUtterances;
- (void)addUtterances:(id)a0;
- (unsigned long long)utterancesCount;
- (id)utterancesAtIndex:(unsigned long long)a0;

@end
