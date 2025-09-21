@class LACCompanionAuthenticationEnvironment;

@interface LACOnenessEnvironmentProvider : NSObject <LACCompanionAuthenticationEnvironmentProviding>

@property (nonatomic, readonly) BOOL isFeatureAvailable;
@property (nonatomic, readonly) BOOL isFeatureSupported;
@property (nonatomic, readonly) LACCompanionAuthenticationEnvironment *environment;

- (id)init;

@end
