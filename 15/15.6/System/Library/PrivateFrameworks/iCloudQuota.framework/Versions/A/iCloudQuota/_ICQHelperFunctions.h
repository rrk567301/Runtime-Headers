@interface _ICQHelperFunctions : NSObject

+ (id)defaultValueForKey:(id)a0;
+ (id)standardDateFormat:(unsigned long long)a0;
+ (char)_requestedFetchOffersInOptions:(id)a0;
+ (id)parseTemplates:(id)a0;
+ (id)_remoteBackupSizeOperationQueue;
+ (char)_checkOptions:(id)a0 forKey:(id)a1;
+ (id)_darwinNotificationNameForRequestType:(long long)a0;
+ (id)_getOfferDescriptionFromRequestType:(long long)a0;
+ (long long)_getOfferRequestTypeFromOptions:(id)a0 bundleId:(id)a1 isBuddy:(char)a2;
+ (long long)_offerRequestTypeForStub:(id)a0;
+ (char)_requestedDefaultOfferInOptions:(id)a0;
+ (char)_requestedEventOfferInOptions:(id)a0;
+ (char)_requestedPremiumOfferInOptions:(id)a0;
+ (void)appLaunchLinkTrackerSetLastShownDate:(id)a0 forBundleID:(id)a1;
+ (char)backupRestoreCompletedInOptions:(id)a0;
+ (id)base64EncodeString:(id)a0;
+ (void)bubbleBannerTrackLastDismissed:(id)a0 forReason:(id)a1;
+ (char)defaultKeyExists:(id)a0;
+ (id)defaultStringValueForKey:(id)a0;
+ (id)dictionaryForKey:(id)a0 from:(id)a1;
+ (id)findPlaceholdersInString:(id)a0;
+ (id)followUpGroupIdentifierForString:(id)a0;
+ (id)followUpIdentifierPrefixForRequestType:(long long)a0;
+ (void)getOriginalPhotosSizeWithCompletion:(id /* block */)a0;
+ (void)getPhotosLibrarySizeWithCompletion:(id /* block */)a0;
+ (id)getStringFromNumber:(id)a0;
+ (char)isBackupEnabledForAccount:(id)a0 accountStore:(id)a1;
+ (char)isICPLEnabledForAccount:(id)a0;
+ (char)isPhotosLibraryIncludedInBackupForAccount:(id)a0;
+ (char)isServerMockingEnabled;
+ (id)lastUpdatedForReason:(id)a0 decayUntil:(double)a1;
+ (id)numberForKey:(id)a0 from:(id)a1;
+ (void)remoteBackupSizeForAccount:(id)a0 timeoutInSeconds:(double)a1 completion:(id /* block */)a2;
+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (void)setUserDefaultsBool:(char)a0 forKey:(id)a1;
+ (void)setUserDefaultsObject:(id)a0 forKey:(id)a1;
+ (char)shouldDisplay:(id)a0 forReason:(id)a1 dismissedInSession:(char)a2 supressUntil:(double)a3;
+ (id)stringFromTemplates:(id)a0 key:(id)a1;
+ (id)usedCapacityForVolume:(id)a0;
+ (char)userDefaultsBoolValueForKey:(id)a0;
+ (id)userDefaultsDictionaryForKey:(id)a0;
+ (id)userDefaultsObjectForKey:(id)a0;
+ (id)userDefaultsStringForKey:(id)a0;

@end
