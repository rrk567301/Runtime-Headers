@interface PKCampaignAttributionSessionManager : NSObject

+ (id)sessionID;
+ (id)userDefaults;
+ (id)existingSessionIdentifier;
+ (void)restartSession;
+ (void)restartSessionWithIdentifier:(id)a0;

@end
