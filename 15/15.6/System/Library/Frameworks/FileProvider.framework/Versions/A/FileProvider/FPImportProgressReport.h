@class NSArray, NSDictionary;

@interface FPImportProgressReport : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long status;
@property (nonatomic) long long numberOfItemsReconciled;
@property (nonatomic) long long numberOfItemsInError;
@property (copy, nonatomic) NSArray *errorDetails;
@property (nonatomic) long long dbCreationTimestamp;
@property (nonatomic) char isStreamResetRunning;
@property (nonatomic) long long stateOfDownloadJobs;
@property (nonatomic) long long stateOfUploadJobs;
@property (nonatomic) long long stateOfOtherJobs;
@property (nonatomic) long long numberOfItemsPendingReconciliation;
@property (nonatomic) long long numberOfItemsPendingSelection;
@property (nonatomic) long long numberOfItemsPendingScanningDisk;
@property (nonatomic) long long numberOfItemsPendingScanningProvider;
@property (nonatomic) char xpcActivityRegisteredWithDuet;
@property (nonatomic) unsigned long long xpcActivityTimeSinceLastRegistration;
@property (nonatomic) char xpcActivityIsActive;
@property (nonatomic) unsigned long long xpcActivityTimeSinceLastActivation;
@property (nonatomic) unsigned long long xpcActivityTimeSinceLastAbleToRun;
@property (nonatomic) long long xpcActivityDasdContext;
@property (copy, nonatomic) NSArray *itemsPendingReconciliation;
@property (copy, nonatomic) NSArray *itemsPendingScanningDisk;
@property (copy, nonatomic) NSArray *itemsPendingScanningProvider;
@property (nonatomic) long long latestFolderSelectedForImport;
@property (nonatomic) long long latestFolderSelectedForImportTimestamp;
@property (nonatomic) long long latestFolderSelectedForImportState;
@property (nonatomic) char latestFolderSelectedForImportWasModifiedOnDisk;
@property (nonatomic) char latestFolderSelectedForImportWasModifiedRemotely;
@property (nonatomic) char latestFolderSelectedForImportIsMonitored;
@property (readonly, copy, nonatomic) NSDictionary *json;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
