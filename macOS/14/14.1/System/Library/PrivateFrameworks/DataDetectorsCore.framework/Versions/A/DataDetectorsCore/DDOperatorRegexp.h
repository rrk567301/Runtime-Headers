@class NSMutableArray;

@interface DDOperatorRegexp : DDBasicRegexp <NSCopying> {
    NSMutableArray *_subMatchers;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)arguments;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1 operator:(id)a2;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1 kind:(int)a2;
- (id)effectiveArgument;
- (id)initWithFirst:(id)a0 varArgs:(char *)a1;
- (id)initWithSubMatchers:(id)a0;
- (id)initWithSubMatchersList:(id)a0;
- (id)initWithVarArgs:(char *)a0;
- (id)prettyPrintWithPriority:(int)a0 operatorPriority:(int)a1 operator:(id)a2;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;

@end
