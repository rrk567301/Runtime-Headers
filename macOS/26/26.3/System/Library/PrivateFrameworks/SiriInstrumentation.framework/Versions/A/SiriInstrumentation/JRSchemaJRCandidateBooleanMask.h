@class NSArray, NSData;

@interface JRSchemaJRCandidateBooleanMask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isApplicableToCandidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isApplicableToCandidateAtIndex:(unsigned long long)a0;
- (void)addIsApplicableToCandidate:(BOOL)a0;
- (void)clearIsApplicableToCandidate;
- (void)deleteIsApplicableToCandidate;
- (unsigned long long)isApplicableToCandidateCount;

@end
