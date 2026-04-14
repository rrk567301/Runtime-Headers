@interface JetEngine.JEMetricsSecretMigrator : NSObject

+ (void)migrateSecretIfNecessaryAndReturnSecretValueWithNamespace:(id)a0 topic:(id)a1 secretKey:(id)a2 configuration:(id)a3 secretCompletionHandler:(id /* block */)a4;

- (id)init;

@end
