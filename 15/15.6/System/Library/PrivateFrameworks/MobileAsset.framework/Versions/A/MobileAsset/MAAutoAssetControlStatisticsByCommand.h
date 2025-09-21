@interface MAAutoAssetControlStatisticsByCommand : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long interestInContent;
@property (nonatomic) long long checkForNewer;
@property (nonatomic) long long determineIfAvailable;
@property (nonatomic) long long currentStatus;
@property (nonatomic) long long lockContent;
@property (nonatomic) long long mapLockedContent;
@property (nonatomic) long long continueLockUsage;
@property (nonatomic) long long endLockUsage;
@property (nonatomic) long long endPreviousLocks;
@property (nonatomic) long long endAllPreviousLocks;
@property (nonatomic) long long eliminateAllForSelector;
@property (nonatomic) long long eliminateAllForAssetType;
@property (nonatomic) long long eliminatePromotedNeverLockedForSelector;
@property (nonatomic) long long stageDetermineAllAvailable;
@property (nonatomic) long long stageDownloadAll;
@property (nonatomic) long long stagePurgeAll;
@property (nonatomic) long long stageEraseAll;
@property (nonatomic) long long estimateEvictableBytesForSoftwareUpdate;
@property (nonatomic) long long suspendForSoftwareUpdate;
@property (nonatomic) long long resumeFromSoftwareUpdate;
@property (nonatomic) long long suspendResumeStatusForSoftwareUpdate;

- (id)copy;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)incrementForClientRequestMessage:(id)a0;
- (id)initWithInitialValue:(long long)a0;
- (long long)total;

@end
