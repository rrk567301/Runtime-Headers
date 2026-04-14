@class AudioAnalyticsReporter, NSMutableDictionary, NSDictionary, NSDate, CAReportingPerformanceObject;

@interface CAReporter : NSObject

@property (retain, nonatomic) AudioAnalyticsReporter *swiftReporter;
@property (retain) NSMutableDictionary *internalConfiguration;
@property (retain) NSDate *startDate;
@property (nonatomic) unsigned short serviceType;
@property BOOL started;
@property BOOL removedByClient;
@property BOOL connected;
@property (retain) CAReportingPerformanceObject *perfObject;
@property (readonly) unsigned long long signpostID;
@property (readonly) long long reporterID;
@property (retain, nonatomic) NSDictionary *configuration;

+ (void)sendSingleMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (id)initWithNewReporterID;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)start;
- (void)stop;
- (void)updateWithReporterID:(long long)a0;
- (void).cxx_destruct;
- (void)cacheServiceType:(unsigned short)a0;
- (void)dealloc;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;
- (id)initWithReporterID:(long long)a0 serviceType:(unsigned short)a1;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

@end
