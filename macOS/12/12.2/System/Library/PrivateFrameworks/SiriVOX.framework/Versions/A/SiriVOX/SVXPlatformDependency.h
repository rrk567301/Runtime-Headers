@protocol SVXServiceCommandHandling, SVXAudioStreamingListening, SVXSessionActivityListening, SVXSiriModesManaging, SVXAudioPowerUpdateListening, SVXSessionDataSource;

@interface SVXPlatformDependency : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<SVXServiceCommandHandling> serviceCommandHandler;
@property (readonly, nonatomic) id<SVXSessionActivityListening> activityListener;
@property (readonly, nonatomic) id<SVXAudioPowerUpdateListening> audioPowerUpdateListener;
@property (readonly, nonatomic) id<SVXSiriModesManaging> siriModesManager;
@property (readonly, nonatomic) id<SVXAudioStreamingListening> audioStreamingListener;
@property (readonly, nonatomic) id<SVXSessionDataSource> sessionDataSource;

- (void).cxx_destruct;
- (id)initWithServiceCommandHandler:(id)a0;
- (id)initWithSessionActivityListener:(id)a0;
- (id)initWithAudioPowerUpdateListener:(id)a0;
- (id)initWithSiriModesManager:(id)a0;
- (id)initWithAudioStreamingListener:(id)a0;
- (id)initWithSessionDataSource:(id)a0;

@end
