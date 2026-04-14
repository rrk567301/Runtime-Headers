@class NSScriptClassDescription;

@interface NSScriptObjectTypeDescription : NSScriptTypeDescription {
    NSScriptClassDescription *_classDescription;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)objcClassName;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)initWithClassDescription:(id)a0;

@end
