@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueExpressable:(id)a0;
+ (id)parenthesizedValueCollectionExpressable:(id)a0;

- (id)initWithExpressable:(id)a0;
- (id)ef_SQLIsolatedExpression;
- (id)ef_SQLExpression;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (void).cxx_destruct;

@end
