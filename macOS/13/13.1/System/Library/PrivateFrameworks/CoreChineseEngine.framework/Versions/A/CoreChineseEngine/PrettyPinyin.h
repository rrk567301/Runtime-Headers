@class NSDictionary;

@interface PrettyPinyin : NSObject

@property (readonly, nonatomic) NSDictionary *finalToneDictionary;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_vowelPositionForString:(id)a0;
- (id)_dictionaryFromPinyinString:(id)a0;
- (id)_toneStringWithDictionary:(id)a0;
- (id)toneStringFromToneNumberString:(id)a0;

@end
