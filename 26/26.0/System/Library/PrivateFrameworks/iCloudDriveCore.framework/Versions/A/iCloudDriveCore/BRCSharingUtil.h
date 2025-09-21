@interface BRCSharingUtil : NSObject

+ (id)localizationKey:(id)a0 forTypeOfShare:(id)a1;
+ (BOOL)_openSharedItemAtURL:(id)a0 isSharedFolder:(BOOL)a1 appBundleURL:(id)a2 appID:(id)a3 isSharedDocs:(BOOL)a4 shouldOpenDirectory:(BOOL)a5 isAlreadyAccepted:(BOOL)a6 error:(id *)a7;
+ (void)learnParticipantIdentitiesForShare:(id)a0 forceUpdate:(BOOL)a1 dbFacade:(id)a2;
+ (id)localizationKey:(id)a0 forOSAndTypeOfShare:(id)a1;
+ (id)localizationKeyForOS:(id)a0;
+ (void)openApplicationForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)openSharedSideFaultFileWithURL:(id)a0 recordName:(id)a1 bundleURL:(id)a2 appBundleID:(id)a3 shouldOpenDirectory:(BOOL)a4 isSharedDocs:(BOOL)a5 isAlreadyAccepted:(BOOL)a6 skipOpenIfNeeded:(BOOL)a7 error:(id *)a8;
+ (BOOL)openSharedSideFaultFileWithURL:(id)a0 recordName:(id)a1 bundleURL:(id)a2 shouldOpenDirectory:(BOOL)a3 isSharedDocs:(BOOL)a4 isAlreadyAccepted:(BOOL)a5 skipOpenIfNeeded:(BOOL)a6 error:(id *)a7;
+ (unsigned long long)optionsWithParticipant:(id)a0 isRequester:(BOOL)a1;
+ (void)selectFileForURL:(id)a0;
+ (id)typeForShare:(id)a0;

@end
