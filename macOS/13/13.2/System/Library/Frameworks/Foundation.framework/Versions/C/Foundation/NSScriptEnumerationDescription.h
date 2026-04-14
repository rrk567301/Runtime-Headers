@class NSArray;

@interface NSScriptEnumerationDescription : NSScriptValueTypeDescription {
    NSArray *_enumeratorDescriptions;
}

+ (id)_enumeratorDescriptionsFromImplDeclarations:(id)a0 presoDeclarations:(id)a1;
+ (id)enumerationDescriptionFromName:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2;

- (void)dealloc;
- (BOOL)hasHiddenParts;
- (void)appendEnumerationDeclarationToAETEData:(id)a0 includingParts:(int)a1;
- (id)errorExpectedTypeDescriptor;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (BOOL)isEnumeration;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)coercedValue:(id)a0;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 enumeratorDescriptions:(id)a2 isHidden:(BOOL)a3;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 enumeratorDescriptions:(id)a2;
- (id)enumeratorDescriptions;

@end
