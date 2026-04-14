@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (BOOL)isWhereScoped;
- (id)_lastScopedItem;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;

@end
