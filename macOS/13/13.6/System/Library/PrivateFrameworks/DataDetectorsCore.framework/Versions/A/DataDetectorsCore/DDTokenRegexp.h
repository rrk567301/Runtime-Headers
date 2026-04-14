@interface DDTokenRegexp : DDAtomicRegexp

- (long long)token;
- (id)initWithTokenId:(long long)a0;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
