@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    char _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;
- (char)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;

@end
