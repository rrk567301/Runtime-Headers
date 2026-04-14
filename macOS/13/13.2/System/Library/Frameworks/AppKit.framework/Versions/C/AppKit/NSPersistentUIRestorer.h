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
- (BOOL)performingWindowOrdering;
- (void)delayCGWindowOrderingIfNecessary;
- (void)resumeNormalWindowOrderingAndDrawing;
- (BOOL)shouldUseOneWindowHeuristic;
- (void)ignoreAnyPreexistingPersistentState;
- (BOOL)promptToIgnorePersistentState;
- (void)populateEncodedReferenceToResponders;
- (void)populateWindowRestorationsByWindowID;
- (void)sortRestorationsByZOrder:(id)a0;
- (id)restorationForWindowID:(id)a0;
- (void)acquireTalagentWindowDictionaries;
- (void)invokeRestoration:(id)a0;
- (void)orderRestoredWindows;
- (void)pickKeyAndMainWindows;
- (id)mungeFullScreenWindowsReturningTheirWindowNumbers;
- (void)restoreStateFromRecords:(id)a0 usingDelegate:(id)a1 requireSecureCoding:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)finishedRestoringWindowsWithZOrder:(id)a0 completionHandler:(id /* block */)a1;
- (void)tearDownStateRestorationApparatusAndResumeWindowOrdering;
- (void)jettisonTalagentWindowsWithCompletionHandler:(id /* block */)a0;

@end
