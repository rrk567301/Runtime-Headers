@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *bundleID;
@property long long completedUnitCount;
@property long long downloadCompletedUnitCount;
@property long long downloadTotalUnitCount;
@property long long installCompletedUnitCount;
@property long long installTotalUnitCount;
@property long long postProcessCompletedUnitCount;
@property long long postProcessTotalUnitCount;
@property char hasPostProcessing;
@property long long essentialBackgroundAssetDownloadEstimate;
@property long long phase;
@property char reportRemotely;
@property long long secondsRemaining;
@property double throughput;
@property long long totalUnitCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;

@end
