@interface PKCampaignAttributionSessionManager : NSObject

+ (id)userDefaults;
+ (id)sessionID;
+ (id)existingSessionIdentifier;
+ (void)restartSession;
+ (void)restartSessionWithIdentifier:(id)a0;

@end
