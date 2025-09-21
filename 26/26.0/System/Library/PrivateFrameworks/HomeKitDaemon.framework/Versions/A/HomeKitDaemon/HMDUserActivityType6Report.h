@class NSDate;

@interface HMDUserActivityType6Report : HMDUserActivityReport

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSDate *stateEnd;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyReportWithChangedTimestamp:(id)a0;
- (unsigned long long)contributorType;
- (id)copyReportWithLastUpdateTimestamp:(id)a0 reason:(unsigned long long)a1;
- (id)initFromMessagePayload:(id)a0 withUser:(id)a1;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 stateEnd:(id)a2 withReason:(unsigned long long)a3;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 stateEnd:(id)a2 withReason:(unsigned long long)a3 changedTimestamp:(id)a4 lastUpdateTimestamp:(id)a5;
- (id)serializedRemoteMessagePayload;

@end
