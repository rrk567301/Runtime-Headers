@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (id)_lastScopedItem;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;
- (BOOL)isWhereScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
