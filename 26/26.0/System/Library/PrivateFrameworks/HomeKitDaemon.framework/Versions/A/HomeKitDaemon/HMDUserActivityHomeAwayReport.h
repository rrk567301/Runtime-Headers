@class HMDDevice;

@interface HMDUserActivityHomeAwayReport : HMDUserActivityReport

@property (retain, nonatomic) HMDDevice *sourceDevice;
@property (readonly, nonatomic) unsigned long long state;

+ (id)reportFromMKFUserActivityStatus:(id)a0 withUser:(id)a1;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyReportWithChangedTimestamp:(id)a0;
- (unsigned long long)contributorType;
- (id)copyReportWithLastUpdateTimestamp:(id)a0 reason:(unsigned long long)a1;
- (id)initFromMessagePayload:(id)a0 withUser:(id)a1 sourceDevice:(id)a2;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 fromDevice:(id)a2 reason:(unsigned long long)a3;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 fromDevice:(id)a2 reason:(unsigned long long)a3 changedTimestamp:(id)a4 lastUpdatedTimeStamp:(id)a5;
- (id)serializedRemoteMessagePayload;

@end
