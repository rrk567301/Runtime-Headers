@interface CloudServicesAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)logUnrecoverableError:(id)a0 forEvent:(id)a1 withAttributes:(id)a2;
- (void)logSuccessForEvent:(id)a0;

@end
