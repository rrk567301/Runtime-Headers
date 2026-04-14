@interface CalUnrecognizedICSHelper : NSObject

+ (BOOL)_propertyWithKey:(id)a0 hasUnrecognizedParameterIn:(id)a1 managedObject:(id)a2;
+ (BOOL)_parameter:(id)a0 isUnrecognizedForPropertyKey:(id)a1 managedObject:(id)a2;
+ (void)storeICSForComponent:(id)a0 managedObject:(id)a1;
+ (void)restoreUnrecognizedICSForComponent:(id)a0 managedObject:(id)a1;

@end
