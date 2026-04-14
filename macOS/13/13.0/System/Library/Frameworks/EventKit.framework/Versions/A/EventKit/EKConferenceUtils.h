@interface EKConferenceUtils : NSObject

+ (id)_workQueue;
+ (id)logHandle;
+ (double)conferenceImageSize;
+ (void)virtualConference:(id)a0 likelyCameFromRoomTypes:(id)a1 completionHandler:(id /* block */)a2;
+ (id)synchronousAppTitleOnlyForURL:(id)a0 incomplete:(BOOL *)a1;
+ (void)applicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)applicationRecordForURL:(id)a0 incomplete:(BOOL *)a1;
+ (id)_applicationRecordFromAppLink:(id)a0 appLinkError:(id)a1 orCustomScheme:(id)a2;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)a0;
+ (void)invalidateConferenceURLIfNeeded:(id)a0 inEventStore:(id)a1;
+ (void)invalidateConferenceURL:(id)a0;
+ (id)validURLForConferenceURL:(id)a0 completion:(id /* block */)a1;
+ (id)_validURLForConferenceURL:(id)a0 previousURLs:(id)a1 completion:(id /* block */)a2;
+ (void)renewConferenceURL:(id)a0 toDate:(id)a1;
+ (void)_findExtensionIdentifierForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_findRoomTypeForURL:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
