@class NSDictionary;

@interface AudioAnalyticsReporter : NSObject

@property (nonatomic) long long reporterID;
@property (nonatomic, readonly) unsigned short serviceType;
@property (nonatomic, copy) NSDictionary *configuration;

+ (void)sendSessionlessMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (id)initWithNewReporterID;
- (void)start;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (void)dealloc;
- (void)stop;
- (void)setServiceType:(unsigned short)a0;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;
- (id)init;
- (id)initWithReporterID:(long long)a0;

@end
