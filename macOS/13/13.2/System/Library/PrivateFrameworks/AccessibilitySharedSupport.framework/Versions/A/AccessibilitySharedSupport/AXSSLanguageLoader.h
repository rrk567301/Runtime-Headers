@interface AXSSLanguageLoader : NSObject

+ (id)loadLanguages;
+ (id)_loadDialectsFromNSSpeechSynthesizer;
+ (id)_characterSetForRanges:(id)a0;

@end
