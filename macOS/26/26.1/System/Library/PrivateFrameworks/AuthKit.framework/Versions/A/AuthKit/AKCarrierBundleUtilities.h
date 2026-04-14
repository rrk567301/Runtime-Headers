@interface AKCarrierBundleUtilities : NSObject

@property (class, readonly) AKCarrierBundleUtilities *sharedInstance;

- (id)phoneBundleInfoWithAdditionalInfo:(id)a0 error:(id *)a1;
- (id)init;

@end
