@class NSString;

@interface SSRVoiceProfileLoader : NSObject

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *personaId;
@property (retain, nonatomic) NSString *siriSharedUserId;

+ (id)getActivePersonaIds;
+ (id)getActiveSiriSharedUserIds;
+ (id)getVoiceProfileWithLocale:(id)a0;
+ (id)getVoiceProfileWithLocale:(id)a0 userSiriProfileId:(id)a1;
+ (id)getVoiceProfileWithVoiceProfileId:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)userProfileIdentifier;
- (id)getVoiceProfile;
- (id)initWithLocale:(id)a0 personaId:(id)a1;
- (id)initWithLocale:(id)a0 siriSharedUserId:(id)a1;

@end
