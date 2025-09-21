@class NSArray, NSString, NSData;

@interface EXPSiriSchemaEXPSiriPegasusResponseSummary : SISchemaInstrumentationMessage {
    struct { unsigned char resultDomain : 1; unsigned char responseStatus : 1; unsigned char confidenceScore : 1; unsigned char isLowConfidenceKnowledgeResult : 1; } _has;
}

@property (nonatomic) int resultDomain;
@property (nonatomic) char hasResultDomain;
@property (nonatomic) int responseStatus;
@property (nonatomic) char hasResponseStatus;
@property (copy, nonatomic) NSArray *canonicalIds;
@property (copy, nonatomic) NSString *catId;
@property (nonatomic) char hasCatId;
@property (nonatomic) float confidenceScore;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) char isLowConfidenceKnowledgeResult;
@property (nonatomic) char hasIsLowConfidenceKnowledgeResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCanonicalIds:(id)a0;
- (id)canonicalIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)canonicalIdsCount;
- (void)clearCanonicalIds;
- (void)deleteCanonicalIds;
- (void)deleteCatId;
- (void)deleteConfidenceScore;
- (void)deleteIsLowConfidenceKnowledgeResult;
- (void)deleteResponseStatus;
- (void)deleteResultDomain;
- (id)suppressMessageUnderConditions;

@end
