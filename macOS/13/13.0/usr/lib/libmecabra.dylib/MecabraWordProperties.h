@class NSString, NSArray;

@interface MecabraWordProperties : NSObject

@property (copy, nonatomic) NSString *analysisString;
@property (retain, nonatomic) NSArray *characterInformation;
@property (retain, nonatomic) NSArray *codeLookupInformation;
@property (nonatomic, getter=isEmoji) BOOL emoji;
@property (nonatomic) int language;

+ (struct __IDXIndex { } *)informationDictionaryAtPath:(struct __CFURL { } *)a0;
+ (struct __IDXIndex { } *)characterInformationDictionary;
+ (struct __IDXIndex { } *)codeLookupInformationDictionary;
+ (id)searchResultsForString:(id)a0 dictionary:(struct __IDXIndex { } *)a1;
+ (id)sortedRadicalList;

- (void)dealloc;
- (id)valueForKey:(int)a0;
- (id)radicalInformationForString:(id)a0;
- (id)strokeInformationForString:(id)a0;
- (id)pinyinInformationForString:(id)a0;
- (id)zhuyinInformationForString:(id)a0;
- (id)initialsForStrings:(id)a0;
- (id)tonesForString:(id)a0;
- (id)separatedInputCodesForString:(id)a0;
- (id)initWithString:(id)a0 language:(int)a1;
- (id)wubixingCodes;
- (id)bihuaCodes;
- (id)cangjieCodes;
- (id)isIncludedInCurrentLanguage;
- (id)wubixingCodesForStandard:(int)a0;

@end
