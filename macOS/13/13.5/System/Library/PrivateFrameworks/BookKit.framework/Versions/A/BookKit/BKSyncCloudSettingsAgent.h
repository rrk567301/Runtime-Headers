@class NSXPCConnection;
@protocol BCSyncICloudSettingsProtocol;

@interface BKSyncCloudSettingsAgent : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) id<BCSyncICloudSettingsProtocol> syncService;
@property (retain, nonatomic) id<BCSyncICloudSettingsProtocol> asyncService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)syncSetLiverpoolEnabled:(BOOL)a0 liverpoolAndUbiquityEnabledStatusReply:(id /* block */)a1;
- (void)setLiverpoolEnabled:(BOOL)a0 liverpoolAndUbiquityEnabledStatusReply:(id /* block */)a1;

@end
