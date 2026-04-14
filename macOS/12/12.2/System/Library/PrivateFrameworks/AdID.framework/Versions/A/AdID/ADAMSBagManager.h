@class AMSBagKeySet, NSString;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createBagForSubProfile;

- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)a0;
- (long long)retrieveLatestPersonalizedAdsConsentVersionFromAMSBag;
- (BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (BOOL)authenticateAccountThroughAMSOperation:(id)a0;

@end
