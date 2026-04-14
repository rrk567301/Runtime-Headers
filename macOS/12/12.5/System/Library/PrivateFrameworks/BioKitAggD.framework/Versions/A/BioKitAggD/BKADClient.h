@class NSXPCConnection;

@interface BKADClient : NSObject

@property (retain) NSXPCConnection *bkadConnection;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)bkadClientWithScalarKey:(struct __CFString { } *)a0;
- (void)bkadClientSetValueForScalarKey:(struct __CFString { } *)a0 withValue:(long long)a1;
- (void)bkadClientAddValueForScalarKey:(struct __CFString { } *)a0 withValue:(long long)a1;
- (void)bkadClientClearDistributionKey:(struct __CFString { } *)a0;
- (void)bkadClientSetValueForDistributionKey:(struct __CFString { } *)a0 withValue:(double)a1;
- (void)bkadClientPushValueForDistributionKey:(struct __CFString { } *)a0 withValue:(double)a1;
- (void)connectToBKADDaemon;
- (id)bkadGetAggDReport;

@end
