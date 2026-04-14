@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (void)registerOperator:(Class)a0;
+ (id)registeredOperatorsOfSuperClassType:(Class)a0;
+ (id)registeredOperators;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (void)initTaskOperatorDependancies;
- (void)startServicesForPreUnlockTelemetry;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (void)setupEntryObjectsAndStorage:(id)a0;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;
- (id)allOperators;

@end
