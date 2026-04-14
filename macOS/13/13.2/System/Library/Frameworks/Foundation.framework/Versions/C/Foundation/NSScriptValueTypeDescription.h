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
- (void)appendObjectClassDeclarationToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)objcClassName;
- (SEL)objcCreationMethodSelector;
- (SEL)objcDescriptorCreationMethodSelector;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2 isHidden:(BOOL)a3;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 objcClassName:(id)a2;
- (id)_oneWordName;
- (id)_oldStyleOneWordName;
- (SEL)objcCreationMethodSelector2;
- (SEL)objcDescriptorCreationMethodSelector2ForClass:(Class)a0;

@end
