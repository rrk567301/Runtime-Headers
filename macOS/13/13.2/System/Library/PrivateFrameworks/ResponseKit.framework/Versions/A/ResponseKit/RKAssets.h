@interface RKAssets : NSObject

+ (id)localizedStrings;
+ (id)synonyms;
+ (id)constantClasses;
+ (id)categoryKeywordMap;
+ (id)fixedPhrases;
+ (id)momentsPhrases;
+ (id)sensitiveSubjectRegularExpressionPatterns;
+ (id)polarTagKeywords;
+ (id)contractedResponses;
+ (id)alternativeInversions;
+ (id)appreciationKeywords;

- (id)init;
- (id)initWithPlistURL:(id)a0;

@end
