@class LACPasscodeUserHelper;

@interface LACPasscodeODHelper : NSObject {
    LACPasscodeUserHelper *_userHelper;
}

- (void).cxx_destruct;
- (id)initWithUserHelper:(id)a0;
- (long long)verifyPasscodeUsingOD:(id)a0;

@end
