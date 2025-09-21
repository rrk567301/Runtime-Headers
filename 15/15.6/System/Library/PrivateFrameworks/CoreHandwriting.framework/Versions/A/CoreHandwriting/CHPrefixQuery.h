@class NSString, NSSet, NSArray, NSCharacterSet;

@interface CHPrefixQuery : CHQuery {
    NSArray *_foundItems;
    NSSet *_validSuffixes;
    NSCharacterSet *_queryDelimiters;
}

@property (readonly, copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSSet *validSuffixes;
@property (readonly, copy, nonatomic) NSArray *foundItems;

+ (id)hashtagQueryForRecognitionSession:(id)a0;
+ (id)mentionQueryForRecognitionSession:(id)a0;
+ (id)prefixQueryWithPrefix:(id)a0 forRecognitionSession:(id)a1;

- (void).cxx_destruct;
- (id)debugName;
- (char)_isTokenStringMatchingQuery:(id)a0 allowPartialMatching:(char)a1;
- (id)_prefixQueryResultsForSessionResult:(id)a0;
- (char)q_doesQueryResultDependOnDeclaredVariables;
- (char)q_resultWantedForCompleteness:(long long)a0;
- (void)q_updateQueryResult;

@end
