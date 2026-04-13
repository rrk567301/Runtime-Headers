@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject

@property (retain) NSArray *cachedResponses;
@property (readonly) NSString *identifier;
@property (retain) NSArray *whitelist;

- (void).cxx_destruct;
- (id)exportObject;
- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;

@end
