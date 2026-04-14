@interface DDOneOrMoreExp : DDUnaryOperator

- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (id)prettyPrintWithPriority:(int)a0;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;
- (id)monElement;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;

@end
