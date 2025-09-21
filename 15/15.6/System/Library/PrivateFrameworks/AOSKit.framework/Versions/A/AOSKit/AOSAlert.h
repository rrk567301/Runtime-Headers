@interface AOSAlert : NSObject

+ (char)doDisplayAlert:(id)a0;
+ (void)_updateLastDisplayTimeForAlert:(id)a0;
+ (char)_displayAuthAlert:(id)a0;
+ (char)_displayFileStorageQuotaAlert:(id)a0;
+ (char)_displayMailStorageQuotaAlert:(id)a0;
+ (char)_displayTermsOfServiceAlert:(id)a0;
+ (id)_identifierForAlert:(id)a0;
+ (id)_lastDisplayTimeForAlert:(id)a0;
+ (void)_launchAlertManagerWithProperties:(id)a0;
+ (char)displayAlert:(id)a0;

@end
