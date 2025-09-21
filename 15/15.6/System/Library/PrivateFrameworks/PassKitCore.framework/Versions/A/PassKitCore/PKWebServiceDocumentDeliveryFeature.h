@class NSURL;

@interface PKWebServiceDocumentDeliveryFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) NSURL *webServiceURL;

+ (id)featureWithWebService:(id)a0;
+ (char)isEnabledWithWebService:(id)a0;
+ (id)webServiceURLWithWebService:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;

@end
