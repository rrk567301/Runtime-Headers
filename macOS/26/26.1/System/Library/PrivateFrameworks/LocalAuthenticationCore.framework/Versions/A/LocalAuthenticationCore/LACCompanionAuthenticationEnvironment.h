@interface LACCompanionAuthenticationEnvironment : NSObject

@property (nonatomic, readonly) BOOL isFeatureAvailable;
@property (nonatomic, readonly) BOOL isFeatureSupported;

- (id)init;
- (id)initWithFeatureAvailable:(BOOL)a0 featureSupported:(BOOL)a1;

@end
