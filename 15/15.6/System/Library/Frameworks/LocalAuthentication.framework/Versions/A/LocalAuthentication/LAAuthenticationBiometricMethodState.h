@interface LAAuthenticationBiometricMethodState : LAAuthenticationMethodState

@property (nonatomic) char isTouchID;
@property (nonatomic) char isFaceID;
@property (nonatomic) unsigned long long lockoutState;
@property (nonatomic) char isUserPresent;

- (id)description;

@end
