@class NSDictionary, NSString, NSDate;

@interface AMSBagNetworkTaskResult : NSObject

@property (retain) NSDictionary *data;
@property (retain) NSDate *expirationDate;
@property (readonly) BOOL expired;
@property (retain) NSString *storefront;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
