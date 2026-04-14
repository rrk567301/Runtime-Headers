@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)getCurrentStats;
- (void)clearSubscription;
- (id)currentValueForSimpleChannel:(id)a0;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)deltaValueForSimpleChannel:(id)a0;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)getDeltaStats;
- (double)getSampleDuration;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)parseSimpleDeltaSample;
- (id)parseSimpleIOReportSample;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (BOOL)updateStats;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;

@end
