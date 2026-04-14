@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueExpressable:(id)a0;
+ (id)parenthesizedValueCollectionExpressable:(id)a0;

- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (id)initWithExpressable:(id)a0;
- (id)ef_SQLIsolatedExpression;
- (void).cxx_destruct;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
