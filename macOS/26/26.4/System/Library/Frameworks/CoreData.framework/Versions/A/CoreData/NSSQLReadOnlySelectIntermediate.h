@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (id)initWithScope:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (void)dealloc;

@end
