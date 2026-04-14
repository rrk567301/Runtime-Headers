@class NSString;

@interface CalCalDAVInboxSyncTaskGroupWrapper : CalCalDAVContainerSyncTaskGroupWrapper {
    BOOL _processingDelayed;
}

@property (retain) NSString *inboxPath;

- (void).cxx_destruct;
- (id)containerPath;
- (void)setSyncToken:(id)a0;
- (void)setCTag:(id)a0;
- (id)etagObjectsForServerFilenames:(id)a0;
- (void)processAddedOrModified:(id)a0 removed:(id)a1;
- (id)initWithPrincipal:(id)a0 inboxPath:(id)a1;

@end
