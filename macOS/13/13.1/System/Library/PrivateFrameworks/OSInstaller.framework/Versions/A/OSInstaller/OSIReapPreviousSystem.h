@class SMPaths, OSIReapableSpaceChecker;

@interface OSIReapPreviousSystem : OSIInstallQueueElement {
    OSIReapableSpaceChecker *_checker;
    unsigned long long _spaceNeededToInstall;
    double _timeToComplete;
    double _timeSoFar;
}

@property BOOL isMSUSpringboard;
@property (retain) SMPaths *pather;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 requiredSpaceToInstall:(unsigned long long)a1;
- (BOOL)_archiveLogs;
- (void)_preserveLionCoreLocationPref;
- (id)_pathsToBackup;
- (id)_templateReceiptForRoot:(id)a0;
- (BOOL)createRecoveredItems;
- (void)_saveReaperPaths;
- (void)_recreateFSFPath;

@end
