@class NSScriptTypeDescription;

@interface NSScriptListTypeDescription : NSScriptTypeDescription {
    NSScriptTypeDescription *_elementTypeDescription;
}

- (void)dealloc;
- (id)elementTypeDescription;
- (id)name;
- (id)initWithElementTypeDescription:(id)a0;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (unsigned int)appleEventCode;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (BOOL)isList;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;

@end
