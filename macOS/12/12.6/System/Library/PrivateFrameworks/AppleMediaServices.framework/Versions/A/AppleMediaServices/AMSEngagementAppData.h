@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject

@property (retain) NSArray *cachedResponses;
@property (retain) NSArray *eventFilters;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)exportObject;
- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;

@end
