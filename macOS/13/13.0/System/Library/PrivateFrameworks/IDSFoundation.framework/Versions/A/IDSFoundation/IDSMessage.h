@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying>

@property (copy) NSNumber *wantsDeliveryStatus;
@property BOOL wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)messageBody;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)_shouldUseJSONForEncoding;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)a0;

@end
