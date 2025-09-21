@class NSArray, NSData;

@interface JRSchemaJRCandidateBooleanMask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isApplicableToCandidates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (char)isApplicableToCandidateAtIndex:(unsigned long long)a0;
- (void)addIsApplicableToCandidate:(char)a0;
- (void)clearIsApplicableToCandidate;
- (void)deleteIsApplicableToCandidate;
- (unsigned long long)isApplicableToCandidateCount;
- (id)suppressMessageUnderConditions;

@end
