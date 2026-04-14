@interface SMWindowsMigrateUserComponentsStep : SMWindowsMigrateComponentStep

+ (unsigned long long)finalSizeWithEngine:(id)a0;

- (id)process;
- (id)prepare;
- (void)copierSuceeded:(id)a0;
- (void)copierStarted:(id)a0;

@end
