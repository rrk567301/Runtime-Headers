@interface DDRepeatCount : DDUnaryOperator <NSCopying> {
    int _count;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)count;
- (id)prettyPrintWithPriority:(int)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (id)effectiveArgument;
- (id)initWithPattern:(id)a0 count:(int)a1;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;
- (id)monElement;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;

@end
