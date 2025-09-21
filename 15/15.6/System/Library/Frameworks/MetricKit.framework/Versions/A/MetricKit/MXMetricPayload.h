@class MXMetaData, NSString, MXDisplayMetric, MXAppRunTimeMetric, MXCPUMetric, NSDate, MXDiskIOMetric, MXAppResponsivenessMetric, MXLocationActivityMetric, MXGPUMetric, MXMemoryMetric, MXAppLaunchMetric, MXAnimationMetric, MXNetworkTransferMetric, MXAppExitMetric, NSArray, MXCellularConditionMetric;

@interface MXMetricPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) MXCPUMetric *cpuMetrics;
@property (retain) MXGPUMetric *gpuMetrics;
@property (retain) MXCellularConditionMetric *cellularConditionMetrics;
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics;
@property (retain) MXLocationActivityMetric *locationActivityMetrics;
@property (retain) MXNetworkTransferMetric *networkTransferMetrics;
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics;
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics;
@property (retain) MXDiskIOMetric *diskIOMetrics;
@property (retain) MXMemoryMetric *memoryMetrics;
@property (retain) MXDisplayMetric *displayMetrics;
@property (retain) MXAnimationMetric *animationMetrics;
@property (retain) MXAppExitMetric *applicationExitMetrics;
@property (retain) NSArray *signpostMetrics;
@property (retain) MXMetaData *metaData;
@property (readonly) NSString *latestApplicationVersion;
@property (readonly) char includesMultipleApplicationVersions;
@property (readonly) NSDate *timeStampBegin;
@property (readonly) NSDate *timeStampEnd;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)DictionaryRepresentation;
- (id)initWithAppVersion:(id)a0 withMutipleAppVersions:(char)a1 withTimeStampBegin:(id)a2 withTimeStampEnd:(id)a3;
- (id)initWithPayloadData:(id)a0 withMutipleAppVersions:(char)a1 withTimeStampBegin:(id)a2 withTimeStampEnd:(id)a3 withMetaData:(id)a4 withMetrics:(id)a5;

@end
