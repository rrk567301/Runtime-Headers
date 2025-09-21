@class NSData;

@interface READSchemaREADRequestPreprocessingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char articleTextLength : 1; unsigned char utteranceCount : 1; unsigned char estimatedDuration : 1; } _has;
}

@property (nonatomic) unsigned int articleTextLength;
@property (nonatomic) char hasArticleTextLength;
@property (nonatomic) unsigned int utteranceCount;
@property (nonatomic) char hasUtteranceCount;
@property (nonatomic) float estimatedDuration;
@property (nonatomic) char hasEstimatedDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteArticleTextLength;
- (void)deleteEstimatedDuration;
- (void)deleteUtteranceCount;
- (id)suppressMessageUnderConditions;

@end
