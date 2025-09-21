@class NSMutableDictionary, NSObject, NSMenuItem, NSTouchBar, NSMutableArray, NSDocumentControllerPersistentRestoration, NSDocumentControllerSubMenuDelegate, NSString, NSSharingServicePicker, NSOperationQueue, NSArray, NSWindow, NSMutableSet, NSDocument;
@protocol OS_dispatch_queue;

@interface NSDocumentControllerMoreIVars : NSObject {
    char shouldCreateUI;
    double autosavingDelay;
    int cachedUTIUsage;
    NSDocumentControllerSubMenuDelegate *subMenuDelegate;
    unsigned long long isAutoreopening;
    NSArray *autoreopenRecordsBeingReopened;
    NSMutableArray *autoreopenRecordsForMissingDocuments;
    char hasAutoreopened;
    char isClosingBeforeSavingDuringTermination;
    char isClosingAfterSavingDuringTermination;
    NSMutableArray *autoreopenRecordsBeingCollectedDuringTermination;
    char autoreopenRecordsNeedRewritingDuringTermination;
    char isAsyncOpeningOrPrinting;
    id /* block */ asyncOpeningOrPrintingWaiter;
    NSArray *batchedOpenings;
    char batchedOpeningTriedToReopen;
    NSMutableDictionary *documentOpeningWaitersByURL;
    NSMutableArray *autoreopenRecordsAlreadyReopenedByTAL;
    NSString *untitledTypeToCreate;
    NSWindow *windowThatBecameKeyDuringOpening;
    char appIsBecomingActiveDuringOpening;
    id appWillBecomeActiveObserver;
    id windowDidBecomeKeyObserver;
    id appDidBecomeActiveObserver;
    char appIsResigningActiveDuringOpening;
    id appWillResignActiveObserver;
    id windowDidResignKeyObserver;
    id appDidResignActiveObserver;
    NSObject<OS_dispatch_queue> *mainThreadUnblockingQueue;
    NSMutableArray *mainThreadUnblockerStack;
    NSMutableArray *mainThreadBlockingInterrupters;
    NSDocumentControllerPersistentRestoration *restorationInfo;
    char dontDisplayDuringReopening;
    NSMutableSet *reservedAutosavingContentsPaths;
    NSDocument *documentBeingDuplicated;
    NSOperationQueue *documentCoordinatingQueue;
    NSOperationQueue *documentOpeningQueue;
    NSMutableArray *documentsStillPreservingVersions;
    NSMutableSet *openRecentDocumentIDs;
    NSOperationQueue *openRecentDocumentUpdatingQueue;
    char requestingSecurityScopedURLsFromOpenPanel;
    char shouldInvertImplicitTabbingBehavior;
    char tabPlusButtonWasClicked;
    NSTouchBar *newDocumentTouchBar;
    char showNewDocumentTouchBar;
    NSSharingServicePicker *currentSharingServicePicker;
    NSMenuItem *selectedSharingServiceMenuItem;
}

- (void).cxx_destruct;

@end
