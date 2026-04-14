@interface NSScriptTypeDescription : NSObject

- (id)description;
- (id)name;
- (unsigned int)appleEventCode;
- (BOOL)isEnumeration;
- (id)classDescription;
- (id)objcClassName;
- (BOOL)isList;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1;

@end
