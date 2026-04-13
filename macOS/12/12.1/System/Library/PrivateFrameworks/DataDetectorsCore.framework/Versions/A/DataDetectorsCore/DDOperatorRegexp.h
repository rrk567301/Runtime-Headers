@class NSMutableArray;

@interface DDOperatorRegexp : DDBasicRegexp <NSCopying> {
    NSMutableArray *_subMatchers;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)arguments;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)effectiveArgument;
- (id)initWithSubMatchersList:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1 operator:(id)a2;
- (id)prettyPrintWithPriority:(int)a0 operatorPriority:(int)a1 operator:(id)a2;
- (id)initWithFirst:(id)a0 varArgs:(char *)a1;
- (id)initWithVarArgs:(char *)a0;
- (id)initWithSubMatchers:(id)a0;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1 kind:(int)a2;

@end
