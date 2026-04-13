@class NSMutableSet, NSMutableDictionary, CalManagedCalDAVCalendar, CalDAVCalendarSource, CalManagedCalDAVPrincipal, NSMutableArray, NSString;

@interface CalCalDAVContainerSyncTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CalDAVChecksumLocalDBInfoProvider, CoreDAVContainerInfoSyncProvider> {
    BOOL _hasChanges;
    NSMutableSet *_resourcesNotDownloadedSuccessfully;
}

@property (retain, nonatomic) CalManagedCalDAVPrincipal *principal;
@property (retain, nonatomic) CalManagedCalDAVCalendar *calendar;
@property (nonatomic) BOOL hasChanges;
@property (retain, nonatomic) CalDAVCalendarSource *calendarSource;
@property (nonatomic) unsigned long long numberOfResourcesAffected;
@property (retain) NSMutableDictionary *mismatches;
@property BOOL usingFilterQuery;
@property (retain, nonatomic) NSMutableArray *addedOrModifiedContainers;
@property (retain, nonatomic) NSMutableArray *removedURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)context;
- (BOOL)hasChanges;
- (id)containerPath;
- (void)setSyncToken:(id)a0;
- (void)containerInfoSyncTask:(id)a0 retrievedAddedOrModifiedContainers:(id)a1 removedContainerURLs:(id)a2;
- (void)containerInfoSyncTask:(id)a0 completedWithNewSyncToken:(id)a1 error:(id)a2;
- (id)copyLocalETagsForURLs:(id)a0 inFolderWithURL:(id)a1;
- (id)copyAllLocalURLsInFolderWithURL:(id)a0;
- (void)containerSyncTask:(id)a0 retrievedAddedOrModifiedActions:(id)a1 removed:(id)a2;
- (void)containerSyncTask:(id)a0 completedWithNewCTag:(id)a1 newSyncToken:(id)a2 addedOrModified:(id)a3 removed:(id)a4 error:(id)a5;
- (void)reportMismatchedETag:(id)a0 forURL:(id)a1 inFolderWithURL:(id)a2 cTag:(id)a3 syncToken:(id)a4 eTag:(id)a5 mismatchType:(int)a6;
- (id)copyLocalChecksumsForFolderWithURL:(id)a0 checksumVersion:(id)a1;
- (void)reportMismatchedChecksum:(id)a0 forURL:(id)a1 inFolderWithURL:(id)a2 checksumVersion:(id)a3 eTag:(id)a4;
- (id)copyCalDAVResourcesToCalCalDAVResources:(id)a0;
- (id)copyFileNamesFromPaths:(id)a0;
- (void)setCTag:(id)a0;
- (id)etagObjectsForServerFilenames:(id)a0;
- (id)_actualETagToReportForItem:(id)a0 url:(id)a1 urlsToETags:(id)a2 localURLToMItem:(id)a3 localURLToETag:(id)a4 duplicateEvents:(id)a5;
- (id)etagObjects;
- (void)processAddedOrModified:(id)a0 removed:(id)a1;
- (void)_messageTraceMismatch:(id)a0;
- (void)taskGroupFinishedWithError:(id)a0;
- (id)_stringForMismatchType:(int)a0;
- (id)_messageTraceSignatureForServerURL:(id)a0;
- (id)copyLocalETagsForURLToETagDict:(id)a0 inFolderWithURL:(id)a1;
- (id)initWithPrincipal:(id)a0 calendar:(id)a1 calendarSource:(id)a2;
- (BOOL)setLocalETag:(id)a0 forItemWithRelativeURI:(id)a1 inFolderWithID:(id)a2;

@end
