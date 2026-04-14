@class NSDictionary, NSMutableDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (class, readonly) NSMutableDictionary *sharedRegexCache;

@property (readonly) NSDictionary *definition;
@property (readonly) BOOL allowsResponse;
@property (readonly) unsigned long long components;

+ (id)_safeValueForKeyPath:(id)a0 inObject:(id)a1;
+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1 withCache:(id)a2;
+ (BOOL)shouldCacheRegularExpressions;
+ (id)_valuesForCustomKeyPath:(id)a0 inObject:(id)a1;
+ (id)regexForPattern:(id)a0 fromCache:(id)a1;
+ (id)stringFromValue:(id)a0;

- (id)init;
- (BOOL)matchesEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (id)exportObject;

@end
