@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueExpressable:(id)a0;
+ (id)parenthesizedValueCollectionExpressable:(id)a0;

- (id)ef_SQLExpression;
- (id)initWithExpressable:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;

@end
