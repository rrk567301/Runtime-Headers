@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (id)registeredOperatorsOfSuperClassType:(Class)a0;
+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (id)allOperators;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
