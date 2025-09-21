@interface _ICQHelperFunctions : NSObject

+ (id)usedCapacityForVolume:(id)a0;
+ (id)defaultStringValueForKey:(id)a0;
+ (BOOL)defaultKeyExists:(id)a0;
+ (BOOL)_requestedEventOfferInOptions:(id)a0;
+ (BOOL)isBackupEnabledForAccount:(id)a0 accountStore:(id)a1;
+ (id)_darwinNotificationNameForRequestType:(long long)a0;
+ (id)userDefaultsObjectForKey:(id)a0;
+ (id)getStringFromNumber:(id)a0;
+ (id)lastUpdatedForReason:(id)a0 decayUntil:(double)a1;
+ (BOOL)userDefaultsBoolValueForKey:(id)a0;
+ (id)findPlaceholdersInString:(id)a0;
+ (id)parseTemplates:(id)a0;
+ (id)_getOfferDescriptionFromRequestType:(long long)a0;
+ (void)setUserDefaultsBool:(BOOL)a0 forKey:(id)a1;
+ (id)standardDateFormat:(unsigned long long)a0;
+ (long long)_getOfferRequestTypeFromOptions:(id)a0 bundleId:(id)a1 isBuddy:(BOOL)a2;
+ (void)getOriginalPhotosSizeWithCompletion:(id /* block */)a0;
+ (BOOL)shouldDisplay:(id)a0 forReason:(id)a1 dismissedInSession:(BOOL)a2 supressUntil:(double)a3;
+ (id)userDefaultsStringForKey:(id)a0;
+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (BOOL)isICPLEnabledForAccount:(id)a0;
+ (long long)_offerRequestTypeForStub:(id)a0;
+ (void)setUserDefaultsObject:(id)a0 forKey:(id)a1;
+ (void)remoteBackupSizeForAccount:(id)a0 timeoutInSeconds:(double)a1 completion:(id /* block */)a2;
+ (void)appLaunchLinkTrackerSetLastShownDate:(id)a0 forBundleID:(id)a1;
+ (id)dictionaryForKey:(id)a0 from:(id)a1;
+ (id)followUpIdentifierPrefixForRequestType:(long long)a0;
+ (id)userDefaultsDictionaryForKey:(id)a0;
+ (BOOL)isServerMockingEnabled;
+ (BOOL)_requestedPremiumOfferInOptions:(id)a0;
+ (void)bubbleBannerTrackLastDismissed:(id)a0 forReason:(id)a1;
+ (BOOL)isSolariumFeatureFlagEnabled;
+ (BOOL)_requestedFetchOffersInOptions:(id)a0;
+ (BOOL)backupRestoreCompletedInOptions:(id)a0;
+ (id)stringFromTemplates:(id)a0 key:(id)a1;
+ (id)base64EncodeString:(id)a0;
+ (BOOL)_requestedDefaultOfferInOptions:(id)a0;
+ (id)_remoteBackupSizeOperationQueue;
+ (id)followUpGroupIdentifierForString:(id)a0;
+ (BOOL)_checkOptions:(id)a0 forKey:(id)a1;
+ (BOOL)isPhotosLibraryIncludedInBackupForAccount:(id)a0;
+ (id)numberForKey:(id)a0 from:(id)a1;
+ (id)defaultValueForKey:(id)a0;

@end
