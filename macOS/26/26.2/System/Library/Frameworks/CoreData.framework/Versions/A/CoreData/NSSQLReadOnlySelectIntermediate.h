@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (BOOL)onlyFetchesAggregates;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;
- (void)dealloc;

@end
