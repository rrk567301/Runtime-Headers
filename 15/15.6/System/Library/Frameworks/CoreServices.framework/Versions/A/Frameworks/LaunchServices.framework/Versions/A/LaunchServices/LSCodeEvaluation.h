@class LSCodeEvaluationClientManager, NSUUID, NSURL, NSDate, LSCodeEvaluationInfo, NSString;

@interface LSCodeEvaluation : NSObject

@property LSCodeEvaluationClientManager *manager;
@property (copy) id /* block */ cancellationHandler;
@property (retain) NSDate *lastUpdate;
@property char haveProgress;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressLock;
@property (readonly) NSUUID *identifier;
@property (readonly) LSCodeEvaluationInfo *info;
@property (readonly) NSURL *url;
@property (readonly) unsigned int uid;
@property (readonly) NSString *teamName;
@property (readonly) NSURL *displayBundleURL;
@property (copy) NSURL *processURL;
@property (copy) NSURL *responsibleURL;
@property (copy) NSString *signingID;
@property (copy) NSString *processSigningID;
@property (copy) NSString *responsibleSigningID;
@property (copy) NSString *teamID;
@property (copy) NSString *processTeamID;
@property (copy) NSString *responsibleTeamID;
@property (copy) NSString *malwareName;
@property (getter=isNotarized) char notarized;
@property (copy) NSDate *notarizationDate;
@property (readonly, getter=isRenamed) char renamed;
@property (readonly) char hasCustomIcon;
@property (getter=isMovedToTrash) char movedToTrash;
@property (copy) NSURL *trashedURL;
@property long long totalUnits;
@property long long completedUnits;
@property (readonly) char mayPresentUI;
@property char lostUIConnection;

+ (char)URLHasCustomIcon:(id)a0;
+ (char)URLIsRenamedApp:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)_completedUnits;
- (void)_finishProgress;
- (void)moveItemToTrash;
- (void)_setTotalUnits:(long long)a0;
- (void)_refreshProgress;
- (void)_setCompletedUnits:(long long)a0;
- (long long)_totalUnits;
- (void)ejectVolume;
- (void)finish;
- (void)finishProgress;
- (id)initWithInfo:(id)a0;
- (id)initWithURL:(id)a0 userID:(unsigned int)a1 displayBundleURL:(id)a2 teamName:(id)a3;
- (void)moveItemToTrashWithReply:(id /* block */)a0;
- (char)presentPromptOfType:(long long)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)registerWithLaunchServices;
- (void)restoreOriginalNameAndIcon;
- (char)setQuarantineFlags:(int)a0 clearFlags:(int)a1;
- (void)showInFinder;
- (void)showInTestFlight;
- (void)showOrigin;
- (void)showSecurityPreferencesAnchor:(id)a0;
- (void)startWithCancellationHandler:(id /* block */)a0;

@end
