@class SEMFTSMatcher;

@interface SEMAppCustomVocabularySearcher : NSObject {
    SEMFTSMatcher *_ftsMatcher;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserId:(id)a0;
- (id)searchAppCustomVocabularyFTS:(id)a0 appIds:(id)a1 types:(id)a2;
- (id)searchAppCustomVocabularyFTSWithWildcardPatterns:(id)a0 appIds:(id)a1 types:(id)a2;
- (BOOL)_validateAppIds:(id)a0 andAddToCriteria:(id)a1;
- (BOOL)_validateCustomTypes:(id)a0 andAddToCriteria:(id)a1;
- (id)initWithFtsMatcher:(id)a0;

@end
