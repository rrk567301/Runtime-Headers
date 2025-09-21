@class MAAutoAssetProgress, MAAutoAssetSelector, MAAutoAssetNotifications, NSDictionary, NSString, NSError;

@interface MAAutoAssetStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (retain, nonatomic) MAAutoAssetNotifications *notifications;
@property (retain, nonatomic) NSDictionary *availableForUseAttributes;
@property (retain, nonatomic) NSDictionary *newerVersionAttributes;
@property (nonatomic) char neverBeenLocked;
@property (nonatomic) char downloadUserInitiated;
@property (retain) MAAutoAssetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (nonatomic) char downloadedAsPatch;
@property (retain, nonatomic) MAAutoAssetSelector *patchedFromBaseSelector;
@property (nonatomic) long long patchedFromBaseFilesystemBytes;
@property (nonatomic) char patchingAttempted;
@property (nonatomic) char stagedPriorToAvailable;
@property (retain, nonatomic) NSString *stagedFromOSVersion;
@property (retain, nonatomic) NSString *stagedFromBuildVersion;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *patchingAttemptError;
@property (retain, nonatomic) NSError *newerVersionError;

+ (id)newCurrentLockUsageSummary:(id)a0;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)getAvailableForUseAttributesAssetFormat:(id *)a0 assetBuild:(id *)a1 minOSVersion:(id *)a2 maxOSVersion:(id *)a3 prerequisiteBuilds:(id *)a4;
- (id)initWithAssetSelector:(id)a0 withNotifications:(id)a1 withAvailableForUseAttributes:(id)a2 withNewerVersionAttributes:(id)a3 withDownloadUserInitiated:(char)a4 withDownloadProgress:(id)a5 withDownloadedNetworkBytes:(long long)a6 withDownloadedFilesystemBytes:(long long)a7 withDownloadedAsPatch:(char)a8 withPatchedFromBaseSelector:(id)a9 withPatchedFromBaseFilesystemBytes:(long long)a10 withPatchingAttempted:(char)a11 withStagedPriorToAvailable:(char)a12 withStagedFromOSVersion:(id)a13 withStagedFromBuildVersion:(id)a14 withCurrentLockUsage:(id)a15 withAvailableForUseError:(id)a16 withPatchingAttemptError:(id)a17 withNewerVersionError:(id)a18;
- (id)initWithAssetSelector:(id)a0 withNotifications:(id)a1 withAvailableForUseAttributes:(id)a2 withNewerVersionAttributes:(id)a3 withNeverBeenLocked:(char)a4 withDownloadUserInitiated:(char)a5 withDownloadProgress:(id)a6 withDownloadedNetworkBytes:(long long)a7 withDownloadedFilesystemBytes:(long long)a8 withDownloadedAsPatch:(char)a9 withPatchedFromBaseSelector:(id)a10 withPatchedFromBaseFilesystemBytes:(long long)a11 withPatchingAttempted:(char)a12 withStagedPriorToAvailable:(char)a13 withStagedFromOSVersion:(id)a14 withStagedFromBuildVersion:(id)a15 withCurrentLockUsage:(id)a16 withAvailableForUseError:(id)a17 withPatchingAttemptError:(id)a18 withNewerVersionError:(id)a19;
- (id)newSummaryDictionary;

@end
