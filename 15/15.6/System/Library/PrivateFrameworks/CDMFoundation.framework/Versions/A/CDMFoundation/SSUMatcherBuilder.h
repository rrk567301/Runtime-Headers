@class NSMutableDictionary;

@interface SSUMatcherBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_matchers;

+ (id)buildMatcher:(id)a0 error:(id *)a1;
+ (id)sharedBuilder;

- (void).cxx_destruct;
- (id)_init;
- (id)getMatcherForBuildParams:(id)a0 error:(id *)a1;
- (char)hasMatcher:(id)a0;
- (unsigned long long)numMatchers;

@end
