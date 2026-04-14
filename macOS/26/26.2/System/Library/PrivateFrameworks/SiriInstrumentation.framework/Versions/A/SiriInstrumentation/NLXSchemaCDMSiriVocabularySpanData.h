@class NSData;

@interface NLXSchemaCDMSiriVocabularySpanData : SISchemaInstrumentationMessage {
    struct { unsigned char matchScore : 1; } _has;
}

@property (nonatomic) double matchScore;
@property (nonatomic) BOOL hasMatchScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteMatchScore;

@end
