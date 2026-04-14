@class CalDAVCalendarSource, NSManagedObjectID;

@interface CalDAVScanDropBoxQueueableOperation : CalDAVQueueableOperation {
    CalDAVCalendarSource *_source;
    NSManagedObjectID *_eventID;
}

@property BOOL isUserRequested;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)performOperation;
- (id)_cachedETagForFilename:(id)a0 sharedUID:(id)a1;
- (BOOL)removeUnreferencedAttachmentsWithContents:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)shouldIgnoreErrorForEvent:(id)a0;
- (void)_dieWithError:(id)a0;
- (void)updateAttachmentsWithResponses:(id)a0 freeBytes:(id)a1;
- (id)_updateDropboxBaseURLIfURLOnDifferentHost:(id)a0;
- (void)scanDropBoxOnAlternateServer:(id)a0;
- (void)handleResultsOfDropBoxURLLookup:(id)a0;

@end
