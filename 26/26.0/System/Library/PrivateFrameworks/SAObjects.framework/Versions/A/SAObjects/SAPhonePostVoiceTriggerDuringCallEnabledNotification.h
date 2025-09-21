@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) BOOL enableVoiceTriggerDuringPhoneCall;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
