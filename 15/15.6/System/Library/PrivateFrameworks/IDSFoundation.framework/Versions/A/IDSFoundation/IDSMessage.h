@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying>

@property (copy) NSNumber *wantsDeliveryStatus;
@property char wantsCertifiedDelivery;
@property (copy) NSDictionary *deliveryStatusContext;
@property (copy) NSNumber *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)messageBody;
- (char)wantsAPSRetries;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:(id)a0;
- (char)_shouldUseJSONForEncoding;
- (id)userAgentHeaderString;
- (char)wantsHTTPHeaders;
- (char)wantsUserAgentInHeaders;

@end
