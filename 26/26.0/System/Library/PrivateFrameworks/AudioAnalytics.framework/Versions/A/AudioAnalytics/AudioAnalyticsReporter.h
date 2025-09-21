@class NSDictionary;

@interface AudioAnalyticsReporter : NSObject

@property (nonatomic) long long reporterID;
@property (nonatomic, readonly) unsigned short serviceType;
@property (nonatomic, copy) NSDictionary *configuration;

+ (void)sendSessionlessMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (void)setServiceType:(unsigned short)a0;
- (void)start;
- (void)dealloc;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (void)stop;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;
- (id)initWithNewReporterID;
- (id)init;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (id)initWithReporterID:(long long)a0;

@end
