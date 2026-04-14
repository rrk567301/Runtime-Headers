@class NSScriptClassDescription;

@interface NSScriptPropertiesRecordTypeDescription : NSScriptRecordTypeDescription {
    NSScriptClassDescription *_containerClassDescription;
}

- (void)dealloc;
- (id)name;
- (unsigned int)appleEventCode;
- (id)initWithContainerClassDescription:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)a0;
- (id)fieldDescriptionForKey:(id)a0;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end
