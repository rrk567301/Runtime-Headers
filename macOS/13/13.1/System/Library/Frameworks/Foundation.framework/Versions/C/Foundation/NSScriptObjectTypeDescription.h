@class NSScriptClassDescription;

@interface NSScriptObjectTypeDescription : NSScriptTypeDescription {
    NSScriptClassDescription *_classDescription;
}

- (void)dealloc;
- (id)name;
- (id)classDescription;
- (unsigned int)appleEventCode;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)initWithClassDescription:(id)a0;

@end
