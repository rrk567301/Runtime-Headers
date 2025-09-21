@class NSString;

@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) long long endpointType;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isRedownloadable) char redownloadable;
@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) char shouldReportPlayEvents;
@property (nonatomic, getter=isSubscriptionRequired) char subscriptionRequired;
@property (readonly, nonatomic) char needsUserUpload;

+ (void)__MPModelPropertyStoreAssetAccountIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetEndpointType__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetNeedsUserUpload__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetRedownloadParameters__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetRedownloadable__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetShouldReportPlayEvents__MAPPING_MISSING__;
+ (void)__MPModelPropertyStoreAssetSubscriptionRequired__MAPPING_MISSING__;
+ (id)__accountIdentifier_KEY;
+ (id)__endpointType_KEY;
+ (id)__needsUserUpload_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__redownloadable_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)allSupportedProperties;


@end
