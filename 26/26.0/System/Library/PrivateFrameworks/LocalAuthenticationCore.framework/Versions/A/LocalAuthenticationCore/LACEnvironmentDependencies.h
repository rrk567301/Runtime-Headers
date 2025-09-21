@class LACPasscodeHelper, LACBiometryHelper;

@interface LACEnvironmentDependencies : NSObject

@property (retain, nonatomic) LACBiometryHelper *biometryHelper;
@property (retain, nonatomic) LACPasscodeHelper *passcodeHelper;

- (void).cxx_destruct;

@end
