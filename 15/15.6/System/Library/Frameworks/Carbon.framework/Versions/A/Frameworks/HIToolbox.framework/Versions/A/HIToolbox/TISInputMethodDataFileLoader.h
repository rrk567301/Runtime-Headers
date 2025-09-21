@class NSString;

@interface TISInputMethodDataFileLoader : NSObject {
    NSString *_fileName;
    char _isValidFile;
    id _module;
    char _parseOnlyForBasicProperties;
}

- (void)dealloc;
- (struct __CFDictionary { } *)propertyList;
- (char)parse;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (void)chooseFormat:(id)a0;
- (id)initWithFile:(id)a0;
- (char)parseForBasicProperties;
- (struct __CFDictionary { } *)wordList;

@end
