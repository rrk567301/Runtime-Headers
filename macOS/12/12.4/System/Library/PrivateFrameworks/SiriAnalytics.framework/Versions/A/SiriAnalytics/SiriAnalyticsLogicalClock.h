@class NSUUID, SiriAnalyticsLogicalClockStatistics;

@interface SiriAnalyticsLogicalClock : NSObject

@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) long long timestampOffset;
@property (readonly, nonatomic) SiriAnalyticsLogicalClockStatistics *clockStatistics;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsTimestamp:(unsigned long long)a0;
- (id)logicalTimestampForMachAbsoluteTime:(unsigned long long)a0;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1;
- (void)stopClock;

@end
