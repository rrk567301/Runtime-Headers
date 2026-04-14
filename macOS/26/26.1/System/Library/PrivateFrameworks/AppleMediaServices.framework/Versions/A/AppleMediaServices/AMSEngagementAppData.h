@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject <NSCopying>

@property (retain) NSArray *cachedResponses;
@property (retain) NSArray *eventFilters;
@property (readonly) NSString *identifier;
@property (retain) NSString *lastSyncedBuild;

- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;
- (id)exportObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
