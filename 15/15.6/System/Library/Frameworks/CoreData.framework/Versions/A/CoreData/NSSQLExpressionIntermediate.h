@class NSExpression;

@interface NSSQLExpressionIntermediate : NSSQLIntermediate {
    NSExpression *_expression;
    char _allowToMany;
}

- (id)initWithExpression:(id)a0 allowToMany:(char)a1 inScope:(id)a2;

@end
