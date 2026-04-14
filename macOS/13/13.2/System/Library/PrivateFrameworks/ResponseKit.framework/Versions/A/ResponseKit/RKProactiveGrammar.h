@interface RKProactiveGrammar : NSObject

+ (id)sharedManager;
+ (id)getOTAPathForRKBundle:(id)a0;
+ (id)getEntities:(id)a0;

- (void)dealloc;
- (id)init;
- (void *)getLanguageModel:(id)a0;
- (void *)chineseTokenizer;
- (id)getEquivalenceClass:(id)a0;
- (id)copyAttributedTokenForText:(id)a0 forLanguage:(id)a1;
- (id)copyAttributedTokenForText:(id)a0 forLanguageModel:(void *)a1 withLanguageCode:(id)a2;

@end
