@class NSData;

@interface READSchemaREADRequestPreprocessingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char articleTextLength : 1; unsigned char utteranceCount : 1; unsigned char estimatedDuration : 1; } _has;
}

@property (nonatomic) unsigned int articleTextLength;
@property (nonatomic) BOOL hasArticleTextLength;
@property (nonatomic) unsigned int utteranceCount;
@property (nonatomic) BOOL hasUtteranceCount;
@property (nonatomic) float estimatedDuration;
@property (nonatomic) BOOL hasEstimatedDuration;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteArticleTextLength;
- (void)deleteEstimatedDuration;
- (void)deleteUtteranceCount;

@end
