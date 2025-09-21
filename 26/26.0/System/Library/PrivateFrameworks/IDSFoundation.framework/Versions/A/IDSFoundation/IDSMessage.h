@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying>

@property (copy) NSNumber *wantsDeliveryStatus;
@property BOOL wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)messageBody;
- (void).cxx_destruct;
- (BOOL)wantsAPSRetries;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)a0;
- (BOOL)_shouldUseJSONForEncoding;
- (id)userAgentHeaderString;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsUserAgentInHeaders;

@end
