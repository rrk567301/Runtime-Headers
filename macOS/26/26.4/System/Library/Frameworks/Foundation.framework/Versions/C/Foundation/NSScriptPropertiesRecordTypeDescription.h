@class NSScriptClassDescription;

@interface NSScriptPropertiesRecordTypeDescription : NSScriptRecordTypeDescription {
    NSScriptClassDescription *_containerClassDescription;
}

- (id)name;
- (void)dealloc;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (unsigned int)appleEventCode;
- (id)errorExpectedTypeDescriptor;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)a0;
- (id)fieldDescriptionForKey:(id)a0;
- (id)initWithContainerClassDescription:(id)a0;

@end
