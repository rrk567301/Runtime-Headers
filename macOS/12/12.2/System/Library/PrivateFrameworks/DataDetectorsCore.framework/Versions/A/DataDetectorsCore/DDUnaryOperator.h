@class DDBindableRegexp;

@interface DDUnaryOperator : DDBasicRegexp <NSCopying> {
    DDBindableRegexp *_subPattern;
}

+ (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2 argument:(id)a3 operatorString:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)argument;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1 operator:(id)a2;
- (id)prettyPrintWithPriority:(int)a0 operatorPriority:(int)a1 operator:(id)a2;
- (id)initWithPattern:(id)a0;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1;
- (id)computeTypeFromParent:(id)a0 withManager:(id)a1 kind:(int)a2;

@end
