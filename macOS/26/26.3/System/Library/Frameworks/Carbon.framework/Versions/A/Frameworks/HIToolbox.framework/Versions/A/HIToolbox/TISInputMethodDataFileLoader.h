@class NSString;

@interface TISInputMethodDataFileLoader : NSObject {
    NSString *_fileName;
    BOOL _isValidFile;
    id _module;
    BOOL _parseOnlyForBasicProperties;
}

- (struct __CFDictionary { } *)propertyList;
- (id)initWithFile:(id)a0;
- (BOOL)parse;
- (void)dealloc;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (void)chooseFormat:(id)a0;
- (BOOL)parseForBasicProperties;
- (struct __CFDictionary { } *)wordList;

@end
