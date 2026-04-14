@interface MMURLRequestFactory : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedURLRequestFactory;
+ (id)parameterizedStorageURL:(id)a0 account:(id)a1 dsid:(id)a2 authToken:(id)a3;
+ (id)parameterizedStorageWithURL:(id)a0 forAccount:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)urlRequestFromInfo:(id)a0;
- (id)appleIDURLRequestForKey:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)accountStorageURLRequestForAccount:(id)a0 withQueryParam:(id)a1;
- (id)accountQuotaURLRequest:(id)a0;
- (id)_urlInfoForKey:(id)a0 accountID:(id)a1 error:(id *)a2;
- (id)urlRequestForiCloudWithInfo:(id)a0 forAccountID:(id)a1;
- (id)accountMailCreationURLRequest:(id)a0 andError:(id *)a1;
- (id)premiumFeaturesURLRequest:(id)a0 featureIdentifier:(id)a1;
- (id)accountCreationURLRequest:(id *)a0;
- (id)accountContinuationURLRequest:(id)a0 andError:(id *)a1;
- (id)appleIDURLRequestForURL:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)iCloudURLRequestForURL:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)iCloudURLRequestForKey:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)newFeaturesNoticeURLRequest:(id)a0;
- (id)urlRequestForKey:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)_premiumFeaturesURLRequest:(id)a0 queryParams:(id)a1;
- (id)accountStorageURLRequest:(id)a0 dsid:(id)a1 authTokent:(id)a2 storageInfo:(id)a3 withQueryParam:(id)a4;
- (id)urlRequestForAppleIDPagesInfo:(id)a0 forAccountID:(id)a1;
- (id)urlRequestForiCloudPagesInfo:(id)a0 forAccountID:(id)a1;
- (id)accountNotesCreationURLRequest:(id)a0 andError:(id *)a1;
- (id)accountStorageURLRequest:(id)a0 dsid:(id)a1 authTokent:(id)a2 withQueryParam:(id)a3;
- (id)mbRepairInfoForAccount:(id)a0 password:(id)a1 error:(id *)a2;
- (id)urlRequestForMBHelpInfo:(id)a0 error:(id *)a1;
- (id)mbHelpInfoForTopic:(struct __CFString { } *)a0 error:(id *)a1;
- (id)urlRequestFromInfo:(id)a0 forAccountID:(id)a1;
- (id)urlRequestForMBAccoutCreation:(id)a0 error:(id *)a1;
- (id)urlRequestForMBAccoutContinuation:(id)a0 continutationHeaderValue:(id)a1 error:(id *)a2;
- (id)urlRequestForMBRepairForAccount:(id)a0 password:(id)a1 delegateData:(id)a2 error:(id *)a3;
- (id)urlRequestForMBAccountIDInfo:(id *)a0;
- (id)urlRequestForMBiCloudInfo:(id *)a0;
- (id)urlRequestForURL:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;

@end
