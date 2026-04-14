@interface DDDisjunctionRegexp : DDOperatorRegexp

- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)buildEffectiveArguments;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1;
- (void)flattenDisjunctionInArray:(id)a0;
- (id)monElement;
- (id)prettyPrintWithPriority:(int)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
