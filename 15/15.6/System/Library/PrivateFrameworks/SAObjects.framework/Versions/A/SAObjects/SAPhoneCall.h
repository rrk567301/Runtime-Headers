@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (copy, nonatomic) NSNumber *emergencyCall;
@property (nonatomic) char faceTime;
@property (nonatomic) char faceTimeAudio;
@property (nonatomic) char handsFreeCall;
@property (nonatomic) char speakerphoneCall;

+ (id)call;
+ (id)callWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
