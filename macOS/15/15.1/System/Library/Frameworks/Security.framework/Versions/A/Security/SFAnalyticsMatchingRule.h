@class NSString, NSDictionary, NSDate, SECSFARule;

@interface SFAnalyticsMatchingRule : NSObject

@property (retain) SECSFARule *rule;
@property (retain) NSDictionary *matchingDictionary;
@property (retain) NSDate *lastMatch;
@property (retain) NSString *eventName;

- (id)description;
- (void).cxx_destruct;
- (id)cachedMatchDictionary;
- (unsigned int)doAction:(id)a0 attributes:(id)a1 logger:(id)a2;
- (id)initWithSFARule:(id)a0 logger:(id)a1;
- (BOOL)isSubsetMatch:(id)a0 target:(id)a1;
- (id)lastMatchTimeKey;
- (BOOL)matchAttributes:(id)a0 eventClass:(long long)a1;
- (BOOL)valueMatch:(id)a0 target:(id)a1;

@end
