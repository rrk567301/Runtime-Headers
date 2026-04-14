@interface NSScriptRecordTypeDescription : NSScriptTypeDescription

- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)coercedValue:(id)a0;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)a0;
- (id)fieldDescriptionForKey:(id)a0;

@end
