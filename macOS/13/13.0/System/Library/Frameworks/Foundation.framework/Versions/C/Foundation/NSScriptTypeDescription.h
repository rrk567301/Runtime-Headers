@interface NSScriptTypeDescription : NSObject

- (id)name;
- (id)description;
- (id)classDescription;
- (unsigned int)appleEventCode;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)errorExpectedTypeDescriptor;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1;
- (BOOL)isEnumeration;
- (BOOL)isList;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)coercedValue:(id)a0;

@end
