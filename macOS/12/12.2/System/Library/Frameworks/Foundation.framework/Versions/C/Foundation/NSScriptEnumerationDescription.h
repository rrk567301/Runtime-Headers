@class NSArray;

@interface NSScriptEnumerationDescription : NSScriptValueTypeDescription {
    NSArray *_enumeratorDescriptions;
}

+ (id)_enumeratorDescriptionsFromImplDeclarations:(id)a0 presoDeclarations:(id)a1;
+ (id)enumerationDescriptionFromName:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2;

- (void)dealloc;
- (BOOL)isEnumeration;
- (BOOL)hasHiddenParts;
- (id)enumeratorDescriptions;
- (void)appendEnumerationDeclarationToAETEData:(id)a0 includingParts:(int)a1;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (id)coercedValue:(id)a0;
- (id)errorExpectedTypeDescriptor;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 enumeratorDescriptions:(id)a2;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 enumeratorDescriptions:(id)a2 isHidden:(BOOL)a3;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end
