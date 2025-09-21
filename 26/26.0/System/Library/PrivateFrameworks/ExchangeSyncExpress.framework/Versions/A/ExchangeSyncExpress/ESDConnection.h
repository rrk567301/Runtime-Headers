@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ESDConnection : NSObject <EXSXPCResponseInterface> {
    NSXPCConnection *_connExchange;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    id /* block */ _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
    NSMutableDictionary *_inFlightGrantedDelegateListRequests;
    NSMutableDictionary *_inFlightGrantedDelegateRequests;
}

@property (nonatomic) BOOL registered;

+ (id)log;
+ (id)sharedConnection;

- (id)_init;
- (void)_serverConnectionDied;
- (void)_finishedCalendarDirectorySearchWithError:(id)a0 completionBlock:(id /* block */)a1;
- (id)performCalendarDirectorySearchWithAccountID:(id)a0 terms:(id)a1 recordTypes:(id)a2 resultLimit:(unsigned long long)a3 resultsBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)respondToSharedCalendarInvite:(long long)a0 forCalendarWithID:(id)a1 accountID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)accountWithACAccountIdentifier:(id)a0 hasChangeForACAccountDataclass:(id)a1;
- (void)dealloc;
- (void)_finishedDownloadingAttachmentWithUUID:(id)a0 accountID:(id)a1 queue:(id)a2 error:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (void)grantedDelegateRequestFinishedForRequestID:(id)a0 error:(id)a1;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (void)cancelCalendarDirectorySearchWithID:(id)a0;
- (void)getCalendarAvailabilityFinishedForRequestID:(id)a0 error:(id)a1;
- (void)_serverConnectionInvalidated;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1;
- (void)removeDelegateWithSourceID:(id)a0 fromParentAccountWithID:(id)a1 completion:(id /* block */)a2;
- (void)getGrantedDelegatesListFinishedForRequestID:(id)a0 results:(id)a1 error:(id)a2;
- (void)cancelCalendarAvailabilityRequestWithID:(id)a0;
- (id)requestGrantedDelegatesListForAccountID:(id)a0 resultsBlock:(id /* block */)a1;
- (void)externalIdentificationForAccountID:(id)a0 resultsBlock:(id /* block */)a1;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)a0 accountID:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)getCalendarAvailabilityForRequestID:(id)a0 results:(id)a1;
- (id)init;
- (BOOL)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (id)_createReplyToRequest:(id)a0 withProperties:(id)a1;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclass:(long long)a2;
- (void)downloadFinishedForRequestID:(id)a0 error:(id)a1;
- (void)searchDirectoryFinishedForRequestID:(id)a0 error:(id)a1;
- (void)cancelGrantedDelegatesListRequestWithID:(id)a0;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)a0 error:(id)a1;
- (void)addDelegateWithName:(id)a0 emailAddress:(id)a1 toAccountWithID:(id)a2 completion:(id /* block */)a3;
- (id)updateGrantedDelegateForAccountID:(id)a0 action:(long long)a1 delegate:(id)a2 permission:(long long)a3 resultsBlock:(id /* block */)a4;
- (void)downloadProgressForRequestID:(id)a0 size:(id)a1 total:(id)a2;
- (id)beginDownloadingAttachmentWithUUID:(id)a0 accountID:(id)a1 queue:(id)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)searchDirectoryForRequestID:(id)a0 results:(id)a1;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (id)updateGrantedDelegatePermissionForAccountID:(id)a0 grantedDelegate:(id)a1 resultsBlock:(id /* block */)a2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)a0 forAccountID:(id)a1 andDataclass:(long long)a2 isUserRequested:(BOOL)a3;
- (id)decodedErrorFromData:(id)a0;
- (id)addGrantedDelegateForAccountID:(id)a0 grantedDelegate:(id)a1 resultsBlock:(id /* block */)a2;
- (id)requestCalendarAvailabilityWithAccountID:(id)a0 startDate:(id)a1 endDate:(id)a2 ignoredEventID:(id)a3 addresses:(id)a4 resultsBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (id)_connectionForExchange;
- (void).cxx_destruct;
- (void)_tearDownInFlightObjects;
- (id)removeGrantedDelegateForAccountID:(id)a0 grantedDelegate:(id)a1 resultsBlock:(id /* block */)a2;

@end
