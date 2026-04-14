@class NSString, NSDate;

@interface SHDataStoreMetadata : NSObject

@property (readonly, copy) NSString *etag;
@property (readonly, copy) NSString *storefront;
@property (readonly) NSDate *fetchDate;

- (void).cxx_destruct;
- (id)initWithStorefront:(id)a0 fetchDate:(id)a1 etag:(id)a2;

@end
