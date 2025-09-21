@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (nonatomic) char emergencyCall;

+ (id)clientCoordinationPhoneCall;
+ (id)clientCoordinationPhoneCallWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
