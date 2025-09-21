@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (void)dealloc;
- (id)_lastScopedItem;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isWhereScoped;

@end
