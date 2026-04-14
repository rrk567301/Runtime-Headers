@class NSDictionary, NSString, NSDate;

@interface AMSEngagementAppResponseModel : NSObject

@property (readonly) NSDictionary *definition;
@property (readonly) NSString *cacheKey;
@property (readonly) NSDate *created;
@property (readonly) NSDictionary *responseData;

+ (BOOL)_shouldEvictDefinition:(id)a0 created:(id)a1;

- (id)exportObject;
- (BOOL)matchesEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 cacheInfo:(id)a1;

@end
