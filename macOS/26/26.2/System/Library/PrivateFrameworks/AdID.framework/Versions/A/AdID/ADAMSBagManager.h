@class NSString, AMSBagKeySet;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)sharedInstance;

- (BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (long long)retrieveLatestPersonalizedAdsConsentVersionFromAMSBag;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)a0;
- (BOOL)authenticateAccountThroughAMSOperation:(id)a0;
- (BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;

@end
