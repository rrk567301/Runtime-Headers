@interface SAWristDetectionStatusClientState : SAAceClientState

@property (nonatomic) char wristDetected;

+ (id)wristDetectionStatusClientState;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)wristDetectionStatusClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
