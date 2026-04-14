@interface SMWindowsMigrateUserComponentsStep : SMWindowsMigrateComponentStep

+ (unsigned long long)finalSizeWithEngine:(id)a0;

- (id)prepare;
- (id)process;
- (void)copierSuceeded:(id)a0;
- (void)copierStarted:(id)a0;

@end
