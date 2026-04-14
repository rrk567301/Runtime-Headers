@class LSCodeEvaluationClientManager, NSUUID, NSURL, NSDate, LSCodeEvaluationInfo, NSString;

@interface LSCodeEvaluation : NSObject

@property LSCodeEvaluationClientManager *manager;
@property (copy) id /* block */ cancellationHandler;
@property (retain) NSDate *lastUpdate;
@property BOOL haveProgress;
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
@property (getter=isNotarized) BOOL notarized;
@property (copy) NSDate *notarizationDate;
@property (readonly, getter=isRenamed) BOOL renamed;
@property (readonly) BOOL hasCustomIcon;
@property long long totalUnits;
@property long long completedUnits;
@property (readonly) BOOL mayPresentUI;
@property BOOL lostUIConnection;

+ (BOOL)URLIsRenamedApp:(id)a0;
+ (BOOL)URLHasCustomIcon:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 userID:(unsigned int)a1 displayBundleURL:(id)a2 teamName:(id)a3;
- (id)initWithInfo:(id)a0;
- (void)finishProgress;
- (void)_finishProgress;
- (void)_setTotalUnits:(long long)a0;
- (long long)_totalUnits;
- (void)_setCompletedUnits:(long long)a0;
- (long long)_completedUnits;
- (void)_refreshProgress;
- (void)startWithCancellationHandler:(id /* block */)a0;
- (void)finish;
- (BOOL)presentPromptOfType:(long long)a0 options:(long long)a1 completion:(id /* block */)a2;
- (BOOL)setQuarantineFlags:(int)a0 clearFlags:(int)a1;
- (void)registerWithLaunchServices;
- (void)moveItemToTrash;
- (void)ejectVolume;
- (void)showOrigin;
- (void)showInFinder;
- (void)showInTestFlight;
- (void)showSecurityPreferencesAnchor:(id)a0;
- (void)restoreOriginalNameAndIcon;

@end
