@interface AudioAnalytics.AudioAnalyticsTestReporter : AudioAnalyticsReporter

@property (nonatomic, readonly) unsigned short serviceType;

- (id)initWithNewReporterID;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)setServiceType:(unsigned short)a0;
- (id)initWithReporterID:(long long)a0;

@end
