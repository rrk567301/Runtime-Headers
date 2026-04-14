@interface SARDAsrOutcomeCandidate : SASResultCandidate

+ (id)asrOutcomeCandidateWithDictionary:(id)a0 context:(id)a1;
+ (id)asrOutcomeCandidate;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
