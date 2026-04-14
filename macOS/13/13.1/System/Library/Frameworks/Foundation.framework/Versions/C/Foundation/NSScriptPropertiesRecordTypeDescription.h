@class NSScriptClassDescription;

@interface NSScriptPropertiesRecordTypeDescription : NSScriptRecordTypeDescription {
    NSScriptClassDescription *_containerClassDescription;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (id)errorExpectedTypeDescriptor;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)a0;
- (id)fieldDescriptionForKey:(id)a0;
- (id)initWithContainerClassDescription:(id)a0;

@end
