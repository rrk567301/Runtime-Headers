@class NSScriptTypeDescription;

@interface NSScriptListTypeDescription : NSScriptTypeDescription {
    NSScriptTypeDescription *_elementTypeDescription;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)errorExpectedTypeDescriptor;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (BOOL)isList;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)coercedValue:(id)a0;
- (id)initWithElementTypeDescription:(id)a0;
- (id)elementTypeDescription;

@end
