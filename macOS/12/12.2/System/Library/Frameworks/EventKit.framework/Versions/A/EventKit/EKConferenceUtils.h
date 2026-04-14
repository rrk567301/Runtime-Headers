@interface EKConferenceUtils : NSObject

+ (id)_workQueue;
+ (id)logHandle;
+ (id)synchronousAppTitleOnlyForURL:(id)a0;
+ (void)invalidateConferenceURLIfNeeded:(id)a0 inEventStore:(id)a1;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)a0;
+ (void)applicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)applicationRecordForURL:(id)a0;
+ (id)_applicationRecordFromAppLink:(id)a0 appLinkError:(id)a1 orCustomScheme:(id)a2;
+ (void)_findExtensionIdentifierForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (double)conferenceImageSize;
+ (void)virtualConference:(id)a0 likelyCameFromRoomTypes:(id)a1 completionHandler:(id /* block */)a2;
+ (void)invalidateConferenceURL:(id)a0;

@end
