@class DYGPUTimelineInfo, NSArray, NSDictionary, DYGPUDerivedEncoderCounterInfo, NSMutableArray;

@interface DYWorkloadGPUTimelineInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int timeBaseNumerator;
@property (nonatomic) unsigned int timeBaseDenominator;
@property (retain, nonatomic) NSMutableArray *mGPUTimelineInfos;
@property (retain, nonatomic) DYGPUTimelineInfo *aggregatedGPUTimelineInfo;
@property (retain, nonatomic) NSArray *perRingSampledDerivedCounters;
@property (retain, nonatomic) NSArray *coreCounts;
@property (retain, nonatomic) NSMutableArray *counterGroups;
@property (retain, nonatomic) DYGPUDerivedEncoderCounterInfo *derivedEncoderCounterInfo;
@property (nonatomic) unsigned int profiledState;
@property (nonatomic) BOOL consistentStateAchieved;
@property (retain, nonatomic) NSArray *restoreTimestamps;
@property (retain, nonatomic) NSDictionary *coalescedEncoderInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createCounterGroup;
- (void)enumerateEncoderDerivedData:(id /* block */)a0;
- (void)enumerateEncoderDerivedDataAtIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (BOOL)isMio;
- (id)mGPUTimelineInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)metalFXCallDuration:(unsigned long long)a0;

@end
