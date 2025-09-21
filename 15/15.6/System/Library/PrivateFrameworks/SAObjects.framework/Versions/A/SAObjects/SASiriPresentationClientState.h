@interface SASiriPresentationClientState : SAAceClientState

@property (nonatomic) char isFullScreen;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)siriPresentationClientState;
+ (id)siriPresentationClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
