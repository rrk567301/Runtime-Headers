@class NSData;

@interface STSchemaSTDisambiguationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationDetected : 1; unsigned char isQuestionQuery : 1; unsigned char isOpenQuery : 1; unsigned char numOfResults : 1; unsigned char isContentSearch : 1; } _has;
}

@property (nonatomic) char disambiguationDetected;
@property (nonatomic) char hasDisambiguationDetected;
@property (nonatomic) char isQuestionQuery;
@property (nonatomic) char hasIsQuestionQuery;
@property (nonatomic) char isOpenQuery;
@property (nonatomic) char hasIsOpenQuery;
@property (nonatomic) unsigned int numOfResults;
@property (nonatomic) char hasNumOfResults;
@property (nonatomic) char isContentSearch;
@property (nonatomic) char hasIsContentSearch;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDisambiguationDetected;
- (void)deleteIsContentSearch;
- (void)deleteIsOpenQuery;
- (void)deleteIsQuestionQuery;
- (void)deleteNumOfResults;
- (id)suppressMessageUnderConditions;

@end
