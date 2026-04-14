@class NSString;

@interface NSScriptValueTypeDescription : NSScriptTypeDescription {
    NSString *_name;
    unsigned int _appleEventCode;
    NSString *_objcClassName;
    SEL _cachedObjcCreationMethodSelector;
    BOOL _isHidden;
}

+ (id)valueTypeDescriptionFromName:(id)a0 declaration:(id)a1;

- (void)dealloc;
- (id)name;
- (BOOL)isHidden;
- (unsigned int)appleEventCode;
- (id)objcClassName;
- (void)appendObjectClassDeclarationToAETEData:(id)a0;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (SEL)objcCreationMethodSelector2;
- (SEL)objcDescriptorCreationMethodSelector2ForClass:(Class)a0;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2 isHidden:(BOOL)a3;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)_oneWordName;
- (id)_oldStyleOneWordName;

@end
