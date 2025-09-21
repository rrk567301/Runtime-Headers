@interface SMWindowsMigrateUserComponentsStep : SMWindowsMigrateComponentStep

- (id)prepare;
- (id)process;
- (void)copierSuceeded:(id)a0;
- (void)copierStarted:(id)a0;

@end
