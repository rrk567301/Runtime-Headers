@class NSArray, NSData;

@interface JRSchemaJRCandidateBooleanMask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isApplicableToCandidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isApplicableToCandidateAtIndex:(unsigned long long)a0;
- (void)addIsApplicableToCandidate:(BOOL)a0;
- (void)clearIsApplicableToCandidate;
- (void)deleteIsApplicableToCandidate;
- (unsigned long long)isApplicableToCandidateCount;

@end
