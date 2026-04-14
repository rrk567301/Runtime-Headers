@class NSString, NSMutableDictionary;

@interface IMMessageNotificationTimeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatsStartTimeDictionary;
@property (retain, nonatomic) NSString *latestIDSTokenURI;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)tearDownSessionForChatIdentifier:(id)a0;
- (void)setDate:(id)a0 forChatIdentifier:(id)a1;
- (BOOL)_isToneToggleSwitchOn;
- (long long)_getTimeWindowOverride;
- (long long)_getToneTimeWindow;
- (BOOL)_shouldSendNotificationForChatIdentifier:(id)a0;
- (void)setLatestNotificationIDSTokenURI:(id)a0;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)a0;
- (void)acquireAssertionToUnsuspendProcess;

@end
