@class NSArray, NSMutableDictionary, NSPersistentUISecureURLHerder, NSPersistentUICrashHandler, NSMutableArray;

@interface NSPersistentUIRestorer : NSObject {
    BOOL performingWindowOrdering;
    BOOL suppressedCGWindowOrderingSuccessfully;
    int suppressedCGWindowOrderingStatus;
    NSMutableArray *windowRestorations;
    NSMutableDictionary *windowRestorationsByWindowID;
}

@property (retain) NSPersistentUICrashHandler *crashHandler;
@property (retain, nonatomic, setter=setURLHerder:) NSPersistentUISecureURLHerder *urlHerder;
@property (readonly) BOOL hasFinishedRestoringWindows;
@property (copy) NSArray *previousSpaceOrder;

- (void)dealloc;
- (id)_debugUnrestoredWindows;
- (void)acquireTalagentWindowDictionaries;
- (void)delayCGWindowOrderingIfNecessary;
- (void)finishedRestoringWindowsWithZOrder:(id)a0 completionHandler:(id /* block */)a1;
- (void)ignoreAnyPreexistingPersistentState;
- (void)invokeRestoration:(id)a0;
- (void)jettisonTalagentWindowsWithCompletionHandler:(id /* block */)a0;
- (id)mungeFullScreenWindowsReturningTheirWindowNumbers;
- (void)orderRestoredWindows;
- (BOOL)performingWindowOrdering;
- (void)pickKeyAndMainWindows;
- (void)populateEncodedReferenceToResponders;
- (void)populateWindowRestorationsByWindowID;
- (BOOL)promptToIgnorePersistentState;
- (id)restorationForWindowID:(id)a0;
- (void)restoreStateFromRecords:(id)a0 usingDelegate:(id)a1 requireSecureCoding:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)resumeNormalWindowOrderingAndDrawing;
- (BOOL)shouldUseOneWindowHeuristic;
- (void)sortRestorationsByZOrder:(id)a0;
- (void)tearDownStateRestorationApparatusAndResumeWindowOrdering;

@end
