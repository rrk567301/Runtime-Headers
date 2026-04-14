@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) BOOL enableVoiceTriggerDuringPhoneCall;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
