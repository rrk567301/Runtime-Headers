@class NSString, NSDictionary, NSError, NSNumber, AMSCarrierLinkParams;

@interface AMSCarrierLinkResult : NSObject

@property (readonly) NSError *error;
@property (readonly) NSDictionary *response;
@property (readonly) NSNumber *statusCode;
@property (readonly) NSString *channelCustomerId;
@property (readonly) AMSCarrierLinkParams *linkParams;
@property (readonly) NSString *productCode;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 linkParams:(id)a1;

@end
