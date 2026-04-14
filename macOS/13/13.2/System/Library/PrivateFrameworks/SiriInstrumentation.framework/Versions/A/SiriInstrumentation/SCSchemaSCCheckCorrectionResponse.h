@class NSArray, NSData;

@interface SCSchemaSCCheckCorrectionResponse : SISchemaInstrumentationMessage {
    struct { unsigned char candidateCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned int candidateCount;
@property (nonatomic) BOOL hasCandidateCount;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResults:(id)a0;
- (unsigned long long)resultsCount;
- (void)clearResults;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResults;
- (void)deleteCandidateCount;

@end
