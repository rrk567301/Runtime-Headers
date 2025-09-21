@class TRIPBTimestamp;

@interface TRIPersistedAllocationStatusCursor : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *lowerBoundExclusive;
@property (nonatomic) char hasLowerBoundExclusive;

+ (id)descriptor;

@end
