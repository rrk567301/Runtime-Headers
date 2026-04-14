@class NSScriptTypeDescription;

@interface NSScriptListTypeDescription : NSScriptTypeDescription {
    NSScriptTypeDescription *_elementTypeDescription;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (id)objcClassName;
- (BOOL)isList;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (id)elementTypeDescription;
- (id)initWithElementTypeDescription:(id)a0;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end
