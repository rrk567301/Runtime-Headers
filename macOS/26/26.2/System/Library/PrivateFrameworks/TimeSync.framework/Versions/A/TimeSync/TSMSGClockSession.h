@interface TSMSGClockSession : NSObject

@property (nonatomic) unsigned long long refCnt;
@property (readonly, nonatomic) unsigned int syncId;
@property (readonly, nonatomic) struct { unsigned long long numerator; unsigned long long denominator; } nominalSyncDuration;

+ (id)withSyncId:(unsigned int)a0 nominalSyncDuration:(struct { unsigned long long x0; unsigned long long x1; })a1;

@end
