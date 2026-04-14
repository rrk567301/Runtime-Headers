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
- (id)_init;
- (void).cxx_destruct;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (void)clearSubscription;
- (id)getCurrentStats;
- (id)getDeltaStats;
- (double)getSampleDuration;
- (BOOL)updateStats;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;
- (id)parseSimpleIOReportSample;
- (id)parseSimpleDeltaSample;
- (id)currentValueForSimpleChannel:(id)a0;
- (id)deltaValueForSimpleChannel:(id)a0;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;

@end
