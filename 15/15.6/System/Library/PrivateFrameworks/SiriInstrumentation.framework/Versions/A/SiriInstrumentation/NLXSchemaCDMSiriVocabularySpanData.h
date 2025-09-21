@class NSData;

@interface NLXSchemaCDMSiriVocabularySpanData : SISchemaInstrumentationMessage {
    struct { unsigned char matchScore : 1; } _has;
}

@property (nonatomic) double matchScore;
@property (nonatomic) char hasMatchScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMatchScore;
- (id)suppressMessageUnderConditions;

@end
