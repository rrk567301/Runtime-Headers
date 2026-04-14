@class NSString, NSDate, NSNumber, SSCAMetalLayerClientResourceUsageSnapshot;

@interface SSCAMetalLayerClientResourceUsageInterval : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (readonly, nonatomic) SSCAMetalLayerClientResourceUsageSnapshot *startSnapshot;
@property (readonly, nonatomic) SSCAMetalLayerClientResourceUsageSnapshot *endSnapshot;
@property (readonly, nonatomic) double deltaPhysicalFootprintMiB;
@property (readonly, nonatomic) double peakPhysicalFootprintMiB;
@property (readonly, nonatomic) double deltaPeakPhysicalFootprintMiB;
@property (readonly, nonatomic) double diskReadsMiB;
@property (readonly, nonatomic) double diskReadsMiBPerSec;
@property (readonly, nonatomic) double diskWritesMiB;
@property (readonly, nonatomic) double diskWritesMiBPerSec;
@property (readonly, nonatomic) double diskLogicalWritesMiB;
@property (readonly, nonatomic) double diskLogicalWritesMiBPerSec;
@property (readonly, nonatomic) unsigned long long instructionCount;
@property (readonly, nonatomic) double instructionCountPerSec;
@property (readonly, nonatomic) unsigned long long pCoreInstructionCount;
@property (readonly, nonatomic) double pCoreInstructionCountPerSec;
@property (readonly, nonatomic) NSNumber *deltaMemoryLimitHeadroomMiB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (unsigned long long)durationMachContinuousTime;
- (id)dictionaryRepresentation;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)startMachContinuousTime;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (double)startMs;
- (BOOL)_hasMemoryLimitHeadroom;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithStartSnapshot:(id)a0 endSnapshot:(id)a1;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
