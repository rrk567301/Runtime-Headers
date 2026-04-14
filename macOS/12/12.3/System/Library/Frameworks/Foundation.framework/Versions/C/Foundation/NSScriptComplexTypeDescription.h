@class NSArray;

@interface NSScriptComplexTypeDescription : NSScriptTypeDescription {
    unsigned int _appleEventCode;
    NSArray *_alternativeTypeDescriptions;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)objcClassName;
- (void)appendObjectClassDeclarationToAETEData:(id)a0;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (id)alternativeTypeDescriptions;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)initWithAppleEventCode:(unsigned int)a0 alernativeTypeDescriptions:(id)a1;

@end
