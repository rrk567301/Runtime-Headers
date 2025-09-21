@interface COMutableBallot : COBallot

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidate:(id)a0;
- (char)addDiscoveryRecord:(id)a0;
- (void)clearInsignificantCandidates;
- (void)mergeBallot:(id)a0;
- (void)removeCandidate:(id)a0;

@end
