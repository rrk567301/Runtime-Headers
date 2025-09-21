@class NSString;

@interface NSScriptValueTypeDescription : NSScriptTypeDescription {
    NSString *_name;
    unsigned int _appleEventCode;
    NSString *_objcClassName;
    SEL _cachedObjcCreationMethodSelector;
    char _isHidden;
}

+ (id)valueTypeDescriptionFromName:(id)a0 declaration:(id)a1;

- (void)dealloc;
- (id)name;
- (char)isHidden;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)_oldStyleOneWordName;
- (id)_oneWordName;
- (void)appendObjectClassDeclarationToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2 isHidden:(char)a3;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcCreationMethodSelector2;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector2ForClass:(Class)a0;

@end
