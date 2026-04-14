@class EWSExchangeServiceBinding;

@interface CalExchangePersistentOperation : CalPersistentOperation

@property EWSExchangeServiceBinding *binding;

+ (void)addSetItemFieldWithExtendedPropertyName:(id)a0 value:(id)a1 to:(id)a2;
+ (id)permittedClassesForChangedValues;
+ (id)addExtendedProperty:(id)a0 value:(id)a1 to:(id)a2;

- (BOOL)executeInContext:(id)a0 error:(id *)a1;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)validateCalendar:(id)a0 inContext:(id)a1;

@end
