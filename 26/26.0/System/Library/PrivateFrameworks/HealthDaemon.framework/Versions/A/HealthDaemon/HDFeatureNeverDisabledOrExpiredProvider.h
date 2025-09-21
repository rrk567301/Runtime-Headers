@protocol HDFeatureDisableAndExpiryProvidingDelegate;

@interface HDFeatureNeverDisabledOrExpiredProvider : NSObject <HDFeatureDisableAndExpiryProviding>

@property (weak, nonatomic) id<HDFeatureDisableAndExpiryProvidingDelegate> delegate;

- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
