@interface DDOptionalExp : DDRepeatMax

+ (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2 argument:(id)a3;

- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1;
- (id)initWithPattern:(id)a0;
- (id)monElement;
- (id)prettyPrintWithPriority:(int)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
