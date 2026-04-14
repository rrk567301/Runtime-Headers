@interface AudioAnalytics.AudioAnalyticsTestReporter : AudioAnalytics.AudioAnalyticsReporter

@property (nonatomic, readonly) unsigned short serviceType;

- (id)initWithNewReporterID;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (id)initWithReporterID:(long long)a0;
- (void)setWithServiceType:(unsigned short)a0;

@end
