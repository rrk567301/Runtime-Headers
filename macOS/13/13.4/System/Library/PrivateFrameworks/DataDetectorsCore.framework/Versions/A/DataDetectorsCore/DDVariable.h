@class NSString;

@interface DDVariable : DDBasicRegexp <NSCopying> {
    NSString *_name;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1;
- (id)initWithVariableName:(id)a0;
- (id)monElement;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
