@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;
+ (id)registeredOperatorsOfSuperClassType:(Class)a0;

- (void)initTaskOperatorDependancies;
- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)allOperators;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (void)setupEntryObjectsAndStorage:(id)a0;
- (void)startServicesForPreUnlockTelemetry;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
