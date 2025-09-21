@class NSDictionary, NSMutableDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (class, readonly) NSMutableDictionary *sharedRegexCache;

@property (readonly) NSDictionary *definition;
@property (readonly) char allowsResponse;
@property (readonly) unsigned long long components;

+ (id)stringFromValue:(id)a0;
+ (char)matchEvent:(id)a0 toFilter:(id)a1 withCache:(id)a2;
+ (id)regexForPattern:(id)a0 fromCache:(id)a1;
+ (char)shouldCacheRegularExpressions;

- (id)init;
- (void).cxx_destruct;
- (char)matchesEvent:(id)a0;
- (id)initWithDefinition:(id)a0;
- (id)exportObject;
- (id)initWithCacheObject:(id)a0;

@end
