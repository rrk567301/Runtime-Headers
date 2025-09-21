@class HMDAccessorySettingsEventHelper;
@protocol HMDHomeRemoteEventAccessControllerDataSource;

@interface HMDHomeRemoteEventAccessController : NSObject <HMDRemoteEventAccessControlProvider>

@property (readonly, weak, nonatomic) id<HMDHomeRemoteEventAccessControllerDataSource> dataSource;
@property (readonly, nonatomic) HMDAccessorySettingsEventHelper *settingsHelper;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (char)isAppleMediaAccessoryUUID:(id)a0 error:(id *)a1;
- (char)isMediaSystemUUID:(id)a0 error:(id *)a1;
- (char)isSiriEndpointAccessoryUUID:(id)a0 error:(id *)a1;
- (char)remoteEventAllowForMediaSystemSettingEventTopic:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;
- (char)remoteEventAllowedForAccessoryEventTopic:(id)a0 parsedEventTopic:(id)a1 deviceType:(unsigned long long)a2 userType:(unsigned long long)a3;
- (char)remoteEventAllowedForAccessoryInfoWithTopicSuffix:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;
- (char)remoteEventAllowedForHomeEventTopic:(id)a0 parsedEventTopic:(id)a1 deviceType:(unsigned long long)a2 userType:(unsigned long long)a3;
- (char)remoteEventAllowedForTopic:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;

@end
