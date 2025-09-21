@class NSArray, NSString;

@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement <MTLoadUrlMeasurementData>

@property (readonly, copy) NSArray *eventData;
@property (readonly, copy) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mark:(id)a0;
- (void)setRedirectCount:(unsigned long long)a0;
- (void)setStatusCode:(unsigned long long)a0;
- (void)setConnectionReused:(char)a0;
- (void)setEdgeNodeCacheStatus:(id)a0;
- (void)setResolvedIPAddress:(id)a0;
- (void)setXpSamplingForced:(char)a0;
- (void)setXpSamplingPercentageUsers:(double)a0;
- (void)setXpSessionDuration:(unsigned long long)a0;
- (void)mark:(id)a0 date:(id)a1;
- (void)mark:(id)a0 time:(long long)a1;
- (void)setDnsServersIPAddresses:(id)a0;
- (void)setRequestUrl:(id)a0;

@end
