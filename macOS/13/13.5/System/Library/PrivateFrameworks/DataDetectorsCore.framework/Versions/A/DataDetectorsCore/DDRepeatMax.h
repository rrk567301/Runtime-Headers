@interface DDRepeatMax : DDUnaryOperator <NSCopying> {
    int _max;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)count;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)initWithPattern:(id)a0 repeatAtMost:(int)a1;
- (id)monElement;
- (id)prettyPrintWithPriority:(int)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
