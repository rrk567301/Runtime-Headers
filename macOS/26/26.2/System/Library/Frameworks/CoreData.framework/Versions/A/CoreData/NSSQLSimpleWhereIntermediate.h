@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (id)_lastScopedItem;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isWhereScoped;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;
- (void)dealloc;

@end
