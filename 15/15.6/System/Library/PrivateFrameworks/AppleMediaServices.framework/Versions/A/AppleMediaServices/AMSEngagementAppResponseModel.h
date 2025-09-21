@class NSDictionary, NSString, NSDate;

@interface AMSEngagementAppResponseModel : NSObject

@property (readonly) NSDictionary *definition;
@property (readonly) NSString *cacheKey;
@property (readonly) NSDate *created;
@property (readonly) NSDictionary *responseData;

+ (char)_shouldEvictDefinition:(id)a0 created:(id)a1;

- (void).cxx_destruct;
- (char)matchesEvent:(id)a0;
- (id)exportObject;
- (id)initWithCacheObject:(id)a0;
- (id)initWithData:(id)a0 cacheInfo:(id)a1;

@end
