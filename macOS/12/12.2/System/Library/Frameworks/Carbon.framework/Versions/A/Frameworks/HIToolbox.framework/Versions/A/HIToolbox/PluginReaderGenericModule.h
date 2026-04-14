@class NSDictionary, NSMutableDictionary, NSString;

@interface PluginReaderGenericModule : NSObject {
    NSMutableDictionary *_inputMethodInformation;
    NSDictionary *_wordList;
    NSString *_fileName;
}

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (BOOL)parse;
- (BOOL)parseForBasicProperties;
- (id)inputMethodInformation;
- (void)_setModeInformation;
- (id)initForBasicProperties;
- (void)setInputSourceID:(id)a0;
- (void)setInputModeID:(id)a0;
- (void)setLocalizedName:(id)a0;
- (void)setIntendedLanguage:(id)a0;

@end
