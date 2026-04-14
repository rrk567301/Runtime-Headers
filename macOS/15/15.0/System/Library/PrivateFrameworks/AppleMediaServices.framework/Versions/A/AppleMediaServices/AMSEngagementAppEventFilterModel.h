@class NSDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly) NSDictionary *definition;
@property (readonly) BOOL allowsResponse;
@property (readonly) unsigned long long components;

+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesEvent:(id)a0;
- (id)initWithDefinition:(id)a0;
- (id)exportObject;
- (id)initWithCacheObject:(id)a0;

@end
