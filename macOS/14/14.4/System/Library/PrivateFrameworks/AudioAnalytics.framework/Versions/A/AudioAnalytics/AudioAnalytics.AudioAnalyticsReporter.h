@class NSDictionary;

@interface AudioAnalytics.AudioAnalyticsReporter : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ reporterID;
@property (nonatomic, readonly) unsigned short serviceType;
@property (nonatomic, copy) NSDictionary *configuration;

+ (void)sendSessionlessMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (void)start;
- (void)stop;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;
- (void)setWithServiceType:(unsigned short)a0;
- (void)dealloc;
- (id)init;
- (id)initWithNewReporterID;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (id)initWithReporterID:(long long)a0;

@end
