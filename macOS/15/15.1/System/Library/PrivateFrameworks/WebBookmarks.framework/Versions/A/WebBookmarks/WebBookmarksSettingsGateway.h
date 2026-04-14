@class NSString, WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setupConnection;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifiers:(id)a2 options:(long long)a3 clearAllSpotlightHistoryForProfile:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)deleteAllSafariSecurityOriginsForProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariWebsiteDataRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)a0;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)a0;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)schedulePasswordIconsCleanup;

@end
