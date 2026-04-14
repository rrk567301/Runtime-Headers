@class NSString;

@interface TISInputMethodDataFileLoader : NSObject {
    NSString *_fileName;
    BOOL _isValidFile;
    id _module;
    BOOL _parseOnlyForBasicProperties;
}

- (BOOL)parse;
- (id)initWithFile:(id)a0;
- (struct __CFDictionary { } *)propertyList;
- (void)dealloc;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (void)chooseFormat:(id)a0;
- (BOOL)parseForBasicProperties;
- (struct __CFDictionary { } *)wordList;

@end
