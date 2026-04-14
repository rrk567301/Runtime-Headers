@class NSScriptClassDescription;

@interface NSScriptObjectTypeDescription : NSScriptTypeDescription {
    NSScriptClassDescription *_classDescription;
}

- (id)name;
- (void)dealloc;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (unsigned int)appleEventCode;
- (id)classDescription;
- (id)initWithClassDescription:(id)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;

@end
