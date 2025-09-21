@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) char enableVoiceTriggerDuringPhoneCall;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
