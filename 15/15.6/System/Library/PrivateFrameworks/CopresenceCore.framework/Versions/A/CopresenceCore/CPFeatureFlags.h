@class NSString;

@interface CPFeatureFlags : NSObject <CPFeatureFlags>

@property (readonly, nonatomic) char qrPluginEncryptionEnabled;
@property (readonly, nonatomic) char expanseParticipantIDHashed;
@property (readonly, nonatomic) char expanseEnabled;
@property (readonly, nonatomic) char expanseTopicStateEnabled;
@property (readonly, nonatomic) char mochiEnabled;
@property (readonly, nonatomic) char unreliableMessengerEnabled;
@property (readonly, nonatomic) char sharePlayLiteEnabled;
@property (readonly, nonatomic) char autoGameCenterEnabled;
@property (readonly, nonatomic) char gameCenterSharePlayIntegration;
@property (readonly, nonatomic) char gameCenterFastSyncTransport;
@property (readonly, nonatomic) char newApplicationLauncherEnabled;
@property (readonly, nonatomic) char sharePlayInFaceTimeCanvasEnabled;
@property (readonly, nonatomic) char sharePlayAttachmentLedgerEnabled;
@property (readonly, nonatomic) char wranglerEnabled;
@property (readonly, nonatomic) char wranglerHomePodBoopEnabled;
@property (readonly, nonatomic) char fastSyncPresenceSeparationEnabled;
@property (readonly, nonatomic) char fastSyncRecoveryMessageHandlingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
