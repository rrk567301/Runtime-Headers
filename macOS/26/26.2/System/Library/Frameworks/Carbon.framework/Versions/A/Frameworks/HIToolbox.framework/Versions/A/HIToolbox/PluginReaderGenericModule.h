@class NSDictionary, NSMutableDictionary, NSString;

@interface PluginReaderGenericModule : NSObject {
    NSMutableDictionary *_inputMethodInformation;
    NSDictionary *_wordList;
    NSString *_fileName;
}

- (BOOL)parse;
- (id)dictionary;
- (void)setLocalizedName:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setInputModeID:(id)a0;
- (void)_setModeInformation;
- (id)initForBasicProperties;
- (id)inputMethodInformation;
- (BOOL)parseForBasicProperties;
- (void)setInputSourceID:(id)a0;
- (void)setIntendedLanguage:(id)a0;

@end
