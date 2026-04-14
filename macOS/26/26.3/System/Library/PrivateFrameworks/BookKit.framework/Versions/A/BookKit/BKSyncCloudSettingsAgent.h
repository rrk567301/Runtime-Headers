@class NSXPCConnection;
@protocol BCSyncICloudSettingsProtocol;

@interface BKSyncCloudSettingsAgent : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) id<BCSyncICloudSettingsProtocol> syncService;
@property (retain, nonatomic) id<BCSyncICloudSettingsProtocol> asyncService;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)syncIsLiverpoolAndUbiquityEnabledWithReply:(id /* block */)a0;

@end
