@class NSMutableDictionary, NSPersistentUISecureURLHerder, NSMutableArray, NSPersistentUICrashHandler;

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

- (void)dealloc;
- (BOOL)promptToIgnorePersistentState;
- (void)ignoreAnyPreexistingPersistentState;
- (BOOL)performingWindowOrdering;
- (void)delayCGWindowOrderingIfNecessary;
- (void)restoreStateFromRecords:(id)a0 usingDelegate:(id)a1 requireSecureCoding:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)resumeNormalWindowOrderingAndDrawing;
- (BOOL)shouldUseOneWindowHeuristic;
- (id)_debugUnrestoredWindows;
- (id)restorationForWindowID:(id)a0;
- (void)finishedRestoringWindowsWithZOrder:(id)a0 completionHandler:(id /* block */)a1;
- (void)populateWindowRestorationsByWindowID;
- (void)populateEncodedReferenceToResponders;
- (void)sortRestorationsByZOrder:(id)a0;
- (void)acquireTalagentWindowDictionaries;
- (void)invokeRestoration:(id)a0;
- (id)mungeFullScreenWindowsReturningTheirWindowNumbers;
- (void)orderRestoredWindows;
- (void)pickKeyAndMainWindows;
- (void)tearDownStateRestorationApparatusAndResumeWindowOrdering;
- (void)jettisonTalagentWindowsWithCompletionHandler:(id /* block */)a0;

@end
