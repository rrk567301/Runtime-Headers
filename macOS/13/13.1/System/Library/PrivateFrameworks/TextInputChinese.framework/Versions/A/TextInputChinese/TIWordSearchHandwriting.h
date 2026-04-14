@interface TIWordSearchHandwriting : TIWordSearch

- (void)acceptCandidate:(const void *)a0;
- (void)updateMecabraState;
- (id)mecabraCreationOptionsDictionary;
- (id)generatePredictionsWithCandidateContext:(id)a0 stringContext:(id)a1 option:(unsigned long long)a2;

@end
