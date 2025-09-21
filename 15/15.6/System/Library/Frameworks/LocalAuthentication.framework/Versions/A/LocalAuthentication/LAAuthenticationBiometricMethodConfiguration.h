@interface LAAuthenticationBiometricMethodConfiguration : LAAuthenticationMethodConfiguration

@property (readonly, nonatomic) char autoRetry;
@property (readonly, nonatomic) char avoidUsingFaceIDCamera;

- (id)initWithAutoRetry:(char)a0 avoidUsingFaceIDCamera:(char)a1 allowedUsers:(id)a2 authenticationContext:(id)a3;

@end
