@class NSString, FCCommandQueue, FCUserInfo;
@protocol FCCoreConfigurationManager;

@interface FCNotificationController : NSObject <FCUserInfoObserving>

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (retain, nonatomic) FCCommandQueue *commandQueue;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *deviceToken;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic) char publisherNotificationsAllowed;
@property (nonatomic) char appleNewsNotificationsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)a0;
- (void)deviceDigestModeDidUpdateToDigestMode:(int)a0;
- (id)initWithUserInfo:(id)a0 commandQueue:(id)a1 configurationManager:(id)a2 publisherNotificationsAllowed:(char)a3 appleNewsNotificationsAllowed:(char)a4;
- (char)refreshNotificationsForChannelIDs:(id)a0 paidChannelIDs:(id)a1;
- (char)refreshNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (void)refreshNotificationsFromAppleNews;
- (void)registerDeviceToken:(id)a0 deviceDigestMode:(int)a1;
- (char)registerNotificationsForChannelID:(id)a0 isPaid:(char)a1;
- (char)registerNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (void)setEndOfAudioTrackNotificationsEnabled:(char)a0;
- (char)setMarketingNotificationsEnabled:(char)a0 error:(id *)a1;
- (void)setNewIssueNotificationsEnabled:(char)a0;
- (char)setPuzzleNotificationsEnabled:(char)a0 userTriggered:(char)a1 error:(id *)a2;
- (void)setSportsTopicNotificationsEnabled:(char)a0;
- (char)unregisterNotificationsForChannelID:(id)a0;
- (char)unregisterNotificationsForTopicIDs:(id)a0 withTopicGroupingID:(id)a1 fromChannelID:(id)a2;
- (void)userInfoDidChangeNotificationsUserID:(id)a0;

@end
