@interface WFParameterValueRegistry : NSObject

+ (void)initialize;
+ (id)registeredValueClasses;
+ (void)createRegisteredValueClassesSet;
+ (void)rediscoverParameterValueClassesIfNeeded;
+ (void)registerValueClass:(Class)a0;
+ (id)allParameterValueClassesInWorkflowKit;

@end
