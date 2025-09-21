@class NSString, SAAppInfo;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand

@property (retain, nonatomic) SAAppInfo *appInfo;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *outputVoiceLanguageCode;
@property (nonatomic) char shouldPromptUser;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *userInterfaceIdiom;

+ (id)spokenNotificationFlowCommand;
+ (id)spokenNotificationFlowCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
