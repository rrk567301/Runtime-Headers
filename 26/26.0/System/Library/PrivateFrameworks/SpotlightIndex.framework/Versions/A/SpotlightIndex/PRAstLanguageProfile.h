@class NSString, NSDictionary;

@interface PRAstLanguageProfile : NSObject

@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL isSpaceDelimited;
@property (retain, nonatomic) NSDictionary *keywordInfo;

- (id)initWithLanguageCode:(id)a0;
- (void)dealloc;
- (id)_buildKeywordInfoForLanguageCode:(id)a0;
- (long long)argumentDirectionForKeyword:(id)a0;
- (long long)fieldTypeForKeyword:(id)a0;
- (BOOL)isBooleanKeyword:(id)a0;
- (BOOL)isOptionalKeyword:(id)a0;

@end
