@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (BOOL)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (id)initWithScope:(id)a0;

@end
