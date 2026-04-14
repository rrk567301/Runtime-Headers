@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *previousIOReportSample;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (id)deltaValueForSimpleChannel:(id)a0;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (id)_calculateDeltaFromPreviousStats:(id)a0 toCurrentStats:(id)a1;
- (BOOL)updateStats;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)parseSimpleDeltaSample;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)getCurrentStats;
- (id)init;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)parseIOReportSample;
- (id)_init;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (void).cxx_destruct;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (double)_convertValue:(long long)a0 toUnityScaleFromUnit:(unsigned long long)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (void)dealloc;
- (id)calculateDeltaFromPreviousSamplesConvertingUnitToUnityScale:(BOOL)a0;
- (id)_parseIOReportSampleFromStats:(id)a0 convertingUnitToUnityScale:(BOOL)a1;
- (id)getDeltaStats;
- (double)getSampleDuration;
- (id)calculateDeltaFromPreviousSamples;
- (id)currentValueForSimpleChannel:(id)a0;
- (void)clearSubscription;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;

@end
