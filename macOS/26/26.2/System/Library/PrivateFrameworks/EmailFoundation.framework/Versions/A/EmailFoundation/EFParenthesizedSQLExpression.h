@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueCollectionExpressable:(id)a0;
+ (id)parenthesizedValueExpressable:(id)a0;

- (id)ef_SQLExpression;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (id)initWithExpressable:(id)a0;

@end
