@interface SMWindowsMigrateSystemComponentsStep : SMWindowsMigrateComponentStep

+ (unsigned long long)finalSizeWithEngine:(id)a0;

- (id)prepare;
- (id)process;
- (void)copierStarted:(id)a0;

@end
